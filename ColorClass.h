// Created by yyanga on 2023/3/17.
// This class contain information describing a color.

#ifndef _COLORCLASS_H_
#define _COLORCLASS_H_

#include<iostream>
#include<fstream>
#include "constants.h"

using namespace std;

class ColorClass {
private:
    int redAmt;//amount of red in a color
    int greenAmt;//amount of green in a color
    int blueAmt;//amount of blue in a color

public:
    //the default ctor sets initial RGB values to full white.
    ColorClass();

    //the value ctor sets the initial RGB values to the values provided
    ColorClass(int inRed, int inGreen, int inBlue);

    //this function sets the color to black
    void setToBlack();

    //this function sets the color to full red
    void setToRed();

    //this function sets the color to full green
    void setToGreen();

    //this function sets the color to full blue
    void setToBlue();

    //this function sets the color to full white
    void setToWhite();

    //this function sets the color to full yellow
    void setToYellow();

    //this function sets the color to full magenta
    void setToMagenta();

    //this function sets the color to full Cyan
    void setToCyan();

    //this function sets the color to given values
    void setTo(int inRed, int inGreen, int inBlue);

    //this function sets the color to the same as given object
    void setTo(ColorClass &inColor);

    //get the red value of this color
    int getRed() const;

    //get the green value of this color
    int getGreen() const;

    //get the blue value of this color
    int getBlue() const;

    //read the RGB value from inFile
    bool readColor(ifstream &inFile);

    //write the RGB value to outFile
    void writeColor(ofstream &outFile, bool isLastCol) const;

    //set the color with given option value
    void setToGivenColor(int choiceOfColor);

    //check if this color is equal to another color
    bool checkIfEqual(ColorClass &anotherColor) const;

    //check if there is anything wrong in the reading color process
    bool checkColorRead(ifstream &inFile);

    //according to patternColorChoice to adjust color
    void encodeColor(int patternColorChoice);

    //set the new color based on the parity (odd or even) of the color
    // components
    void decodeColor();

    //check "odd" function
    bool checkOdd(int colorAmt);

};

#endif //_COLORCLASS_H_
