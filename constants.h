// Created by yyanga on 2023/3/17.
// This is a file to define all global constants.

#ifndef _CONSTANTS_H
#define _CONSTANTS_H

#include<iostream>
#include<string>

using namespace std;


//the default number of cin/ifstream ignore until '/'
const int DEFAULT_IGNORE_NUM = 201;

//the minimum amount of color value
const int MIN_COLOR_AMT = 0;
//the maximum amount of color value for default ppm image
const int MAX_COLOR_AMT = 255;
//define a constant for the minimum allowed column number
const int MIN_COLUMN_NUMBER = 0;
//define a constant for the minimum allowed row number
const int MIN_ROW_NUMBER = 0;

//this is the default value for row in default ctor of
//ppmImgClass and MessgFileClass
const int DEFAULT_ROW_VALUE = 1;
//this is the default value for column in default ctor of
//ppmImgClass and MessgFileClass
const int DEFAULT_COL_VALUE = 1;
//this is the default value of magical number for ppm file
const string DEFAULT_PPM_MAGICAL_NUMBER = "P3";

//the minimum pixels of column/row in ppmImgClass
const int MIN_PIXELS = 1;
//the maximum pixels of column/row in ppmImgClass
const int MAX_PIXELS = 2000;

//the user input location values are 0-based
//therefore, the margin of col/row location needs to be the margin number of
// col/row minus this defined flag
const int ZERO_BASED_FLAG = 1;
//define a constant for the last column offset
const int LAST_COLUMN_OFFSET = 1;

//the changed value of pixel color
const int CHANGED_VALUE_OF_COLOR = 1;

//the default value of the choice that encode a message from file
const int DEFAULT_VALUE_OF_ENCODE_MESSAGE = 1;
//the default value of the choice that perform decode
const int DEFAULT_VALUE_OF_PERFORM_DECODE = 2;
//the default value of the choice that write current image to file
const int DEFAULT_VALUE_OF_WRITE_IMAGE = 3;
//the default value of the choice that exit the program
const int DEFAULT_VALUE_OF_EXIT_PROGRAM = 4;

// define a constant for the even divisor
const int EVEN_DIVISOR = 2;
// Define a constant for the division remainder
const int DIVISION_REMAINDER = 0;

//the default value of the choice that color is black
const int CHOICE_OF_BLACK = 0;
//the default value of the choice that color is red
const int CHOICE_OF_RED = 1;
//the default value of the choice that color is green
const int CHOICE_OF_GREEN = 2;
//the default value of the choice that color is blue
const int CHOICE_OF_BLUE = 3;
//the default value of the choice that color is white
const int CHOICE_OF_WHITE = 4;
//the default value of the choice that color is yellow
const int CHOICE_OF_YELLOW = 5;
//the default value of the choice that color is Magenta
const int CHOICE_OF_MAGENTA = 6;
//the default value of the choice that color is Cyan
const int CHOICE_OF_CYAN = 7;

//the default value of pattern in each pixel
const int CHOICE_OF_NOT_MODIFY = 8;

// Define a constant for the expected number of command-line arguments
const int EXPECTED_ARG_COUNT = 2;
// Define a constant for the index of the program name argument
const int PROGRAM_NAME_ARG_INDEX = 0;
// Define a constant for the index of the input file argument
const int INPUT_FILE_ARG_INDEX = 1;
// Define a constant for the exit code when fewer arguments are provided
const int INVALID_ARG_EXIT_CODE_TWO = 2;
// Define a constant for the exit code when filename cannot be read
const int INVALID_ARG_EXIT_CODE_THREE = 3;

#endif //_CONSTANTS_H
