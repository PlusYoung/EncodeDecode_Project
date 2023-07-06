// Created by yyanga on 2023/3/18.
// TO read MessgFile.txt and send out the information from it

#ifndef _MESSGFILECLASS_H_
#define _MESSGFILECLASS_H_

#include "ColorClass.h"

class MessgFileClass {
private:
    int rowNum;//represent the row number of pattern
    int colNum;//represent the column number of pattern
    int isModify;//represent if we need to modify the pixel of pattern
    int **pattern;//construct a pointer to point to construct 2D-array

public:
    //default ctor to set pattern with default value
    MessgFileClass();

    //value ctor of patternClass to set pattern with given value
    MessgFileClass(int inRow, int inCol);

    //initialize a pattern with given value
    void initializeTo(int inRow, int inCol);

    //get the row number of pattern
    int getRow() const;

    //get the column number of pattern
    int getCol() const;

    //read a pattern from txt file
    bool readPattern(const string &fileName);

    //check if there is anything wrong in the reading process
    bool checkReadRowCol(ifstream &inFile);

    //check the pixel value of pattern
    bool checkPixelVal(ifstream &inFile);

    // get pattern
    int **getPattern();
};

#endif //_MESSGFILECLASS_H_
