// Created by yyanga on 2023/3/17.
// This cpp file is to use information to describe a color.
#include "ColorClass.h"
#include "constants.h"
#include<iostream>

using namespace std;

//the default ctor sets initial RGB values to full white.
ColorClass::ColorClass() {
    redAmt = MAX_COLOR_AMT;
    greenAmt = MAX_COLOR_AMT;
    blueAmt = MAX_COLOR_AMT;
}

//the value ctor sets the initial RGB values to the values provided
ColorClass::ColorClass(int inRed, int inGreen, int inBlue) {
    redAmt = inRed;
    greenAmt = inGreen;
    blueAmt = inBlue;
}

//this function sets the color to black
void ColorClass::setToBlack() {
    setTo(MIN_COLOR_AMT, MIN_COLOR_AMT, MIN_COLOR_AMT);
}

//this function sets the color to full red
void ColorClass::setToRed() {
    setTo(MAX_COLOR_AMT, MIN_COLOR_AMT, MIN_COLOR_AMT);
}

//this function sets the color to full green
void ColorClass::setToGreen() {
    setTo(MIN_COLOR_AMT, MAX_COLOR_AMT, MIN_COLOR_AMT);
}

//this function sets the color to full blue
void ColorClass::setToBlue() {
    setTo(MIN_COLOR_AMT, MIN_COLOR_AMT, MAX_COLOR_AMT);
}

//this function sets the color to full white
void ColorClass::setToWhite() {
    setTo(MAX_COLOR_AMT, MAX_COLOR_AMT, MAX_COLOR_AMT);
}

//this function sets the color to full yellow
void ColorClass::setToYellow() {
    setTo(MAX_COLOR_AMT, MAX_COLOR_AMT, MIN_COLOR_AMT);
}

//this function sets the color to full magenta
void ColorClass::setToMagenta() {
    setTo(MAX_COLOR_AMT, MIN_COLOR_AMT, MAX_COLOR_AMT);
}

//this function sets the color to full Cyan
void ColorClass::setToCyan() {
    setTo(MIN_COLOR_AMT, MAX_COLOR_AMT, MAX_COLOR_AMT);
}

//this function sets the color to given values
void ColorClass::setTo(int inRed, int inGreen, int inBlue) {
    redAmt = inRed;
    greenAmt = inGreen;
    blueAmt = inBlue;
}

//this function sets the color to the same as given object
void ColorClass::setTo(ColorClass &inColor) {
    redAmt = inColor.redAmt;
    greenAmt = inColor.greenAmt;
    blueAmt = inColor.blueAmt;
}

//get the red value of this color
int ColorClass::getRed() const {
    return redAmt;
}

//get the green value of this color
int ColorClass::getGreen() const {
    return greenAmt;
}

//get the blue value of this color
int ColorClass::getBlue() const {
    return blueAmt;
}

//read the RGB value from inFile
bool ColorClass::readColor(ifstream &inFile) {
    int inRed;
    int inGreen;
    int inBlue;
    //check each pixel
    //check red value
    inFile >> inRed;
    if (!checkColorRead(inFile)) {
        inFile.close();
        return false;
    }
    //red value should be in bound
    if (inRed < MIN_COLOR_AMT || MAX_COLOR_AMT < inRed) {
        inFile.close();
        return false;
    }

    //check green value
    inFile >> inGreen;
    if (!checkColorRead(inFile)) {
        inFile.close();
        return false;
    }

    //green value should be in bound
    if (inGreen < MIN_COLOR_AMT || MAX_COLOR_AMT < inGreen) {
        inFile.close();
        return false;
    }

    //check blue value
    inFile >> inBlue;
    if (!checkColorRead(inFile)) {
        inFile.close();
        return false;
    }

    //blue value should be in bound
    if (inBlue < MIN_COLOR_AMT || MAX_COLOR_AMT < inBlue) {
        inFile.close();
        return false;
    }

    setTo(inRed, inGreen, inBlue);
    return true;
}

//write the RGB value to outFile
void ColorClass::writeColor(ofstream &outFile, bool isLastCol) const {
    //if it is not the pixel in last column
    if (!isLastCol) {
        outFile << redAmt << " ";
        outFile << greenAmt << " ";
        outFile << blueAmt << " ";
    } else//we need to add endl in the last value instead of space
    {
        outFile << redAmt << " ";
        outFile << greenAmt << " ";
        outFile << blueAmt << endl;
    }
}

//set the color with given option value
void ColorClass::setToGivenColor(int choiceOfColor) {
    if (choiceOfColor == CHOICE_OF_RED) {
        setToRed();
    } else if (choiceOfColor == CHOICE_OF_GREEN) {
        setToGreen();
    } else if (choiceOfColor == CHOICE_OF_BLUE) {
        setToBlue();
    } else if (choiceOfColor == CHOICE_OF_BLACK) {
        setToBlack();
    } else if (choiceOfColor == CHOICE_OF_WHITE) {
        setToWhite();
    }
}

//check if this color is equal to another color
bool ColorClass::checkIfEqual(ColorClass &anotherColor) const {
    if (
            redAmt != anotherColor.getRed() ||
            greenAmt != anotherColor.getGreen() ||
            blueAmt != anotherColor.getBlue()
            ) {
        return false;
    } else {
        return true;
    }

}

//check if there is anything wrong in the reading color process
bool ColorClass::checkColorRead(ifstream &inFile) {
    if (inFile.fail() && !inFile.eof()) {
        cout << "The RBG value should be int type" << endl;
        inFile.clear();
        inFile.ignore(DEFAULT_IGNORE_NUM, '\n');
        return false;
    } else if (inFile.fail() && inFile.eof()) {
        //the dimension of image is incorrect
        return false;
    } else {
        return true;
    }
}

//According to patternColorChoice to adjust color
void ColorClass::encodeColor(int patternColorChoice) {
    //change the value of some pixel
    if (patternColorChoice == CHOICE_OF_BLACK) {
        if (checkOdd(redAmt)) {
            redAmt = redAmt - CHANGED_VALUE_OF_COLOR;
        }
        if (checkOdd(greenAmt)) {
            greenAmt = greenAmt - CHANGED_VALUE_OF_COLOR;
        }
        if (checkOdd(blueAmt)) {
            blueAmt = blueAmt - CHANGED_VALUE_OF_COLOR;
        }
    }
    if (patternColorChoice == CHOICE_OF_RED) {
        if (!checkOdd(redAmt)) {
            redAmt = redAmt + CHANGED_VALUE_OF_COLOR;
        }
        if (checkOdd(greenAmt)) {
            greenAmt = greenAmt - CHANGED_VALUE_OF_COLOR;
        }
        if (checkOdd(blueAmt)) {
            blueAmt = blueAmt - CHANGED_VALUE_OF_COLOR;
        }
    }
    if (patternColorChoice == CHOICE_OF_GREEN) {
        if (checkOdd(redAmt)) {
            redAmt = redAmt - CHANGED_VALUE_OF_COLOR;
        }
        if (!checkOdd(greenAmt)) {
            greenAmt = greenAmt + CHANGED_VALUE_OF_COLOR;
        }
        if (checkOdd(blueAmt)) {
            blueAmt = blueAmt - CHANGED_VALUE_OF_COLOR;
        }
    }
    if (patternColorChoice == CHOICE_OF_BLUE) {
        if (checkOdd(redAmt)) {
            redAmt = redAmt - CHANGED_VALUE_OF_COLOR;
        }
        if (checkOdd(greenAmt)) {
            greenAmt = greenAmt - CHANGED_VALUE_OF_COLOR;
        }
        if (!checkOdd(blueAmt)) {
            blueAmt = blueAmt + CHANGED_VALUE_OF_COLOR;
        }
    }
    if (patternColorChoice == CHOICE_OF_WHITE) {
        if (!checkOdd(redAmt)) {
            redAmt = redAmt + CHANGED_VALUE_OF_COLOR;
        }
        if (!checkOdd(greenAmt)) {
            greenAmt = greenAmt + CHANGED_VALUE_OF_COLOR;
        }
        if (!checkOdd(blueAmt)) {
            blueAmt = blueAmt + CHANGED_VALUE_OF_COLOR;
        }
    }
    if (patternColorChoice == CHOICE_OF_YELLOW) {
        if (!checkOdd(redAmt)) {
            redAmt = redAmt + CHANGED_VALUE_OF_COLOR;
        }
        if (!checkOdd(greenAmt)) {
            greenAmt = greenAmt + CHANGED_VALUE_OF_COLOR;
        }
        if (checkOdd(blueAmt)) {
            blueAmt = blueAmt - CHANGED_VALUE_OF_COLOR;
        }
    }
    if (patternColorChoice == CHOICE_OF_MAGENTA) {
        if (!checkOdd(redAmt)) {
            redAmt = redAmt + CHANGED_VALUE_OF_COLOR;
        }
        if (checkOdd(greenAmt)) {
            greenAmt = greenAmt - CHANGED_VALUE_OF_COLOR;
        }
        if (!checkOdd(blueAmt)) {
            blueAmt = blueAmt + CHANGED_VALUE_OF_COLOR;
        }
    }
    if (patternColorChoice == CHOICE_OF_CYAN) {
        if (checkOdd(redAmt)) {
            redAmt = redAmt - CHANGED_VALUE_OF_COLOR;
        }
        if (!checkOdd(greenAmt)) {
            greenAmt = greenAmt + CHANGED_VALUE_OF_COLOR;
        }
        if (!checkOdd(blueAmt)) {
            blueAmt = blueAmt + CHANGED_VALUE_OF_COLOR;
        }
    }
    setTo(redAmt, greenAmt, blueAmt);
}

//set the new color based on the parity (odd or even) of the color
// components
void ColorClass::decodeColor() {
    if (!checkOdd(redAmt) && !checkOdd(greenAmt) && !checkOdd(blueAmt)) {
        setToBlack();
    }
    if (checkOdd(redAmt) && !checkOdd(greenAmt) && !checkOdd(blueAmt)) {
        setToRed();
    }
    if (!checkOdd(redAmt) && checkOdd(greenAmt) && !checkOdd(blueAmt)) {
        setToGreen();
    }
    if (!checkOdd(redAmt) && !checkOdd(greenAmt) && checkOdd(blueAmt)) {
        setToBlue();
    }
    if (checkOdd(redAmt) && checkOdd(greenAmt) && checkOdd(blueAmt)) {
        setToWhite();
    }
    if (checkOdd(redAmt) && checkOdd(greenAmt) && !checkOdd(blueAmt)) {
        setToYellow();
    }
    if (checkOdd(redAmt) && !checkOdd(greenAmt) && checkOdd(blueAmt)) {
        setToMagenta();
    }
    if (!checkOdd(redAmt) && checkOdd(greenAmt) && checkOdd(blueAmt)) {
        setToCyan();
    }
}


//check "odd" function
bool ColorClass::checkOdd(int colorAmt) {
    if (colorAmt % EVEN_DIVISOR == DIVISION_REMAINDER) {
        return false;
    } else {
        return true;
    }
}
