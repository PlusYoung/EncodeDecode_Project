// Created by yyanga on 2023/3/18.
// This class is to read MessgFile.txt and send out the information from it.

#include "MessgFileClass.h"

//default ctor to set pattern with default value
MessgFileClass::MessgFileClass() {
    rowNum = DEFAULT_ROW_VALUE;
    colNum = DEFAULT_COL_VALUE;
    isModify = CHOICE_OF_NOT_MODIFY;
    pattern = new int *[rowNum];
    for (int i = 0; i < rowNum; i++) {
        pattern[i] = new int[colNum];
    }
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            pattern[i][j] = isModify;
        }
    }
}

//value ctor of patternClass to set pattern with given value
MessgFileClass::MessgFileClass(int inRow, int inCol) {
    rowNum = inRow;
    colNum = inCol;
    isModify = CHOICE_OF_NOT_MODIFY;
    pattern = new int *[rowNum];
    for (int i = 0; i < rowNum; i++) {
        pattern[i] = new int[colNum];
    }
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            pattern[i][j] = isModify;
        }
    }
}

//initialize a pattern with given value
void MessgFileClass::initializeTo(int inRow, int inCol) {
    rowNum = inRow;
    colNum = inCol;
    isModify = CHOICE_OF_NOT_MODIFY;
    pattern = new int *[rowNum];
    for (int i = 0; i < rowNum; i++) {
        pattern[i] = new int[colNum];
    }
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            pattern[i][j] = isModify;
        }
    }
}

//get the row number of pattern
int MessgFileClass::getRow() const {
    return rowNum;
}

//get the column number of pattern
int MessgFileClass::getCol() const {
    return colNum;
}

//read a pattern from txt file
bool MessgFileClass::readPattern(const string &fileName) {
    ifstream inFile;//represent the file put in
    int fileRow;//store the row number of inFile
    int fileCol;//store the columns number of inFile
    int modifySign;//store the option of modify
    int redundantVal;//store the remaining value and check if it exits

    //covert to a C-string and open the file with given file name
    inFile.open(fileName.c_str());

    //check the open status
    if (inFile.fail()) {
        cout << "We cannot open the file, the file name might be wrong" << endl;
        cout << "Please check the file name you entered in " << fileName
             << endl;
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

    //column number should be greater than MIN_COLUMN_NUMBER
    if (fileCol <= MIN_COLUMN_NUMBER) {
        cout << "The column number of this file should be positive" << endl;
        inFile.close();
        return false;
    }

    inFile >> fileRow;
    if (!checkReadRowCol(inFile)) {
        cout << "Sorry, we cannot get the row number" << endl;
        inFile.close();
        return false;
    }

    //row number should be greater than MIN_ROW_NUMBER
    if (fileRow <= MIN_ROW_NUMBER) {
        cout << "The row number of this file should be positive" << endl;
        inFile.close();
        return false;
    }

    //free up the memory of original pattern
    for (int i = 0; i < rowNum; i++) {
        delete[] pattern[i];
    }

    delete[] pattern;
    pattern = NULL;

    initializeTo(fileRow, fileCol);
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            inFile >> modifySign;
            //check inFile
            if (!checkPixelVal(inFile)) {
                inFile.close();
                cout << "Error: Reading message value at row/col: " << i <<
                     " " << j << endl;
                cout << "Message encode successful: No" << endl;
                return false;
            }

            //check modifySign value
            if (modifySign != CHOICE_OF_BLACK
                && modifySign != CHOICE_OF_RED
                && modifySign != CHOICE_OF_GREEN
                && modifySign != CHOICE_OF_BLUE
                && modifySign != CHOICE_OF_WHITE
                && modifySign != CHOICE_OF_YELLOW
                && modifySign != CHOICE_OF_MAGENTA
                && modifySign != CHOICE_OF_CYAN
                && modifySign == CHOICE_OF_NOT_MODIFY) {
                //The value of row and column should between 0 and 7
                inFile.close();
                cout << "Message encode successful: No" << endl;
                return false;
            }
            pattern[i][j] = modifySign;
        }
    }

    //check if there is remaining after reading all values in given dimension
    inFile >> redundantVal;
    if (!inFile.fail() || !inFile.eof()) {
        cout << "We detect that your pattern has values out of the scale"
             << endl;
        inFile.close();
        cout << "Message encode successful: No" << endl;
        return false;
    }

    inFile.close();
    return true;
}

//check if there is anything wrong in the reading process
bool MessgFileClass::checkReadRowCol(ifstream &inFile) {
    if (inFile.fail()) {
        //Fail to read the value, check the value type!
        inFile.clear();
        inFile.ignore(DEFAULT_IGNORE_NUM, '\n');
        return false;
    } else {
        return true;
    }
}

//check the pixel value of pattern
bool MessgFileClass::checkPixelVal(ifstream &inFile) {
    if (inFile.fail()) {
        //The pixel of pattern you input should be int type
        return false;
    } else if (inFile.eof()) {
        //The dimension of pattern is incompatible with your value
        cout << "The dimension of pattern is incompatible with your value"
             << endl;
        return false;
    } else {
        return true;
    }
}

// get pattern
int **MessgFileClass::getPattern() {
    return pattern;
}