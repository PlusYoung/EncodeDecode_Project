// Created by yyanga on 2023/3/17.
//this class represent the ppm image and some function of ppm image

#ifndef _PPMIMGCLASS_H_
#define _PPMIMGCLASS_H_

#include<iostream>
#include<fstream>
#include<string>
#include "constants.h"
#include "ColorClass.h"
#include "CheckUserTwoIntInput.h"
#include "MessgFileClass.h"


class PpmImgClass {
private:
    //It's a pointer points to store location and its color value
    ColorClass **ppmImage;
    string ppmMagicNum;//the magic number get from ppm file
    int colNum;//the number of columns get from ppm file
    int rowNum;//the number of rows get from ppm file
    int maxColorVal;//the maximum color value get from ppm file


public:

    //default ctor to set the object in default value
    PpmImgClass();

    //read an existed .ppm file
    bool readPpmFile(const string &fileName);

    //write out the current image as .ppm file
    bool writeOutPpmFile(const string &filePath);

    //check if there is anything wrong in the reading process
    bool checkReadRowCol(ifstream &inFile);

    //encode image with pattern from file
    bool encodeImage();

    //perform decode
    bool decodeImage();

    //encode RGB value for each pixel
    void encodeUnitPixel(int patternColorChoice, ColorClass &ppmColor);

    //decode RGB value for each pixel
    void decodeUnitPixel(ColorClass &ppmColor);

    //get the attribute of maxColorVal if needed
    int getMaxColorVal() const;

    //get the smaller valuer between two values
    int getMin(int valueA, int valueB);

};

#endif //_PPMIMGCLASS_H_
