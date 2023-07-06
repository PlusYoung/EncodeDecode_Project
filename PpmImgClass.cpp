// Created by yyanga on 2023/3/17.
// This Class is to read, encode, decode and write out ppm picture

#include "PpmImgClass.h"
#include<iostream>
#include<string>

using namespace std;

//default ctor to set the object in default value
PpmImgClass::PpmImgClass() {
    //default ctor to set default initial ppm image
    //set the row and column of object with default value
    rowNum = DEFAULT_ROW_VALUE;
    colNum = DEFAULT_COL_VALUE;
    maxColorVal = MAX_COLOR_AMT;
    //allocate a dynamic array of ColorClass as row of image
    ppmImage = new ColorClass *[rowNum];

    //use for loop to dynamic allocate columns of object
    for (int i = 0; i < rowNum; i++) {
        ppmImage[i] = new ColorClass[colNum];
    }

    //use for loop to set each pixel to full black
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            ppmImage[i][j].setToBlack();
        }
    }
}

//read an existed .ppm file
bool PpmImgClass::readPpmFile(const string &fileName) {
    ifstream inFile;//represent the file put in
    string fileType;//store the type of inFile
    int fileRow;//store the row number of inFile
    int fileCol;//store the columns number of inFile
    int fileMaxColorVal;//store the maximum color value of inFile
    int redundantVal;//store the remaining value and check if it exits

    //covert to a C-string and open the file with given file name
    inFile.open(fileName.c_str());

    //check the open status
    if (inFile.fail()) {
        cout << "We cannot open the file, the file name might be wrong"
             << endl;
        cout << "Please check the file name you entered in" << fileName
             << endl;
        return false;
    }

    //check the in file type
    inFile >> fileType;
    if (inFile.fail()) {
        cout << "Sorry, the image type should be string type" << endl;
        inFile.close();
        return false;
    }

    if (fileType != DEFAULT_PPM_MAGICAL_NUMBER) {
        cout << "Sorry, we detect that this is not a ppm file" << endl;
        cout << "The image type should be P3" << endl;
        inFile.close();
        return false;
    }

    //check the row number and column number
    inFile >> fileCol;
    if (!checkReadRowCol(inFile)) {
        cout << "Sorry, we cannot get the column number" << endl;
        inFile.close();
        return false;
    }

    //check column number should be greater than 0 and less than 2000
    if (fileCol < MIN_PIXELS && fileCol > MAX_PIXELS) {
        cout << "The column number is out of boundary" << endl;
        inFile.close();
        return false;
    }

    inFile >> fileRow;
    if (!checkReadRowCol(inFile)) {
        cout << "Sorry, we cannot get the row number" << endl;
        inFile.close();
        return false;
    }

    //row number should be greater than 0 and less than 2000
    if (fileRow < MIN_PIXELS && fileRow > MAX_PIXELS) {
        cout << "The row number is out of boundary" << endl;
        inFile.close();
        return false;
    }

    //check the maximum color value
    inFile >> fileMaxColorVal;
    if (inFile.fail()) {
        cout << "Sorry we cannot get the maximum of color value" << endl;
        inFile.close();
        return false;
    }

    //the maximum color value should be 255
    if (fileMaxColorVal != MAX_COLOR_AMT) {
        cout << "The max color value of this file should be 255" << endl;
        inFile.close();
        return false;
    }

    //free up the memory of original ppmImage
    for (int i = 0; i < rowNum; i++) {
        delete[] ppmImage[i];
    }

    delete[] ppmImage;
    ppmImage = NULL;

    //get the pixel of image
    rowNum = fileRow;
    colNum = fileCol;

    //reset the ppmImage according to the file
    ppmImage = new ColorClass *[rowNum];

    //use for loop to dynamic allocate columns of object
    for (int i = 0; i < rowNum; i++) {
        ppmImage[i] = new ColorClass[colNum];
    }

    //use for loop to set each pixel
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            //read RGB value for each pixel
            //and check if it could be read.
            if (!ppmImage[i][j].readColor(inFile)) {
                cout << "Error: Reading color from file" << endl;
                cout << "Error: Reading image pixel at row: " << i;
                cout << " Col " << j << endl;
                return false;
            }
        }
    }

    //check if there is redundant value after reading all the pixels we need
    inFile >> redundantVal;
    //check if we can read the redundant value
    //the expectation is we cannot read or do not meet eof
    if (!inFile.fail() || !inFile.eof()) {
        cout << "We detect that your ppm file has values out of the scale"
             << endl;
        return false;
    }

    inFile.close();
    return true;
}

//check if there is anything wrong in the reading process
bool PpmImgClass::checkReadRowCol(ifstream &inFile) {
    if (inFile.fail()) {
        cout << "Fail to read the value, check the value type!" << endl;
        inFile.clear();
        inFile.ignore(DEFAULT_IGNORE_NUM, '\n');
        return false;
    } else {
        return true;
    }
}

//encode image with pattern from file
bool PpmImgClass::encodeImage() {
    //get the pattern class
    MessgFileClass patternClass;
    //get pattern array
    int **patternArry;
    //store the pattern file name
    string fileName;
    //flag to finish program
    bool inValidTextInput;
    //represent the row number of upper left of ppm
    int ppmStartRow;
    //represent the column number of upper left of ppm
    int ppmStartCol;
    //represent the row number of pattern from message file
    int patternRow;
    //represent the colum number of pattern from message file
    int patternCol;
    //represent the difference row number between start point and ppm image edge
    //it tells us the max row of message file that we can use
    int maxPatternRow;
    //represent the difference col number between start point and ppm image edge
    //it tells us the max col of message file that we can use
    int maxPatternCol;

    cout << "Enter name of file containing message: ";
    cin >> fileName;
    cout << "Enter row and column for message placement: ";

    //check starting point type
    if (!checkUserTwoIntInput(ppmStartRow, ppmStartCol)) {
        cout << "Sorry, we cannot get your values" << endl;
        cout << "Please start over and try again." << endl;
        return false;
    }

    //get the pattern from txt
    inValidTextInput = patternClass.readPattern(fileName);
    if (!inValidTextInput) {
        return false;
    }

    patternRow = patternClass.getRow();
    patternCol = patternClass.getCol();

    //delve with starting point not in image
    if (
            ppmStartRow < (MIN_PIXELS - ZERO_BASED_FLAG) ||
            ppmStartCol < (MIN_PIXELS - ZERO_BASED_FLAG) ||
            ppmStartRow > (rowNum - ZERO_BASED_FLAG) ||
            ppmStartCol > (colNum - ZERO_BASED_FLAG)
            ) {
        cout << "tip: the starting point is out of image, therefore the ppm "
             << "image dose not change after encoding" << endl;
        return true;
    } else {
        maxPatternRow = rowNum - ppmStartRow;
        maxPatternCol = colNum - ppmStartCol;

        //use loop to encode the color of ppm
        for (int i = 0; i < getMin(maxPatternRow, patternRow); i++) {
            for (int j = 0; j < getMin(maxPatternCol, patternCol); j++) {
                //encode RGB value for each pixel
                patternArry = patternClass.getPattern();
                encodeUnitPixel(patternArry[i][j],
                                ppmImage[ppmStartRow + i][ppmStartCol + j]);
            }
        }
        return true;
    }
}


//perform decode
bool PpmImgClass::decodeImage() {
    //use loop to encode the color of ppm
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            decodeUnitPixel(ppmImage[i][j]);
        }
    }
    return true;
}


//encode RGB value for each pixel
void PpmImgClass::encodeUnitPixel(int patternColorChoice,
                                  ColorClass &ppmColor) {
    ppmColor.encodeColor(patternColorChoice);
}

//decode RGB value for each pixel
void PpmImgClass::decodeUnitPixel(ColorClass &ppmColor) {
    ppmColor.decodeColor();
}

//write out the current image as .ppm file
bool PpmImgClass::writeOutPpmFile(const string &filePath) {
    ofstream outFile;//this is the output file
    bool isLastCol;//store boolean sign of if it is last column when write color
    outFile.open(filePath.c_str());
    if (outFile.fail()) {
        cout << "Unable to write the file due to wrong file path" << endl;
        outFile.close();
        return false;
    }

    outFile << DEFAULT_PPM_MAGICAL_NUMBER << endl;
    outFile << colNum << " " << rowNum << endl;
    outFile << MAX_COLOR_AMT << endl;

    //initialize the value of isLastCol as false
    isLastCol = false;
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            //check if it is the last column
            //for last column, we need to cout endl
            //for other columns, we only need to cout space
            if (j == colNum - LAST_COLUMN_OFFSET) {
                isLastCol = true;
            }
            ppmImage[i][j].writeColor(outFile, isLastCol);
        }
        //reset the isLastCol to false for next for loop
        isLastCol = false;
    }

    outFile.close();
    return true;
}

//get the attribute of maxColorVal if needed
int PpmImgClass::getMaxColorVal() const {
    return maxColorVal;
}

//get the smaller valuer between two values
int PpmImgClass::getMin(int valueA, int valueB) {
    if (valueA < valueB) {
        return valueA;
    } else {
        return valueB;
    }
}
