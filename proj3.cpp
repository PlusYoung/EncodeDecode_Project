#include <iostream>
#include <cstdlib>
#include "constants.h"
#include "PpmImgClass.h"
#include "CheckUserOneIntInput.h"

//This project3 is done by Yang Yang in 19th Mar.

//The program is for users to modify(encode and decode) their image in ppm type.

//It contains 3 Class including ColorClass, MessgFileClass, PpmImgClass.
//It also has two global functions named CheckUserOneIntInput and
// CheckUserTwoIntInput, which are used to check user's input value for
// one int or two int.

//Once the user enters wrong filename for the image or command line argument,
// the program would exit.

//If the user enters something invalid in later program, they need to start over
//until they do it correctly.

using namespace std;

int main(int argc, char *argv[]) {
    //initialize a boolean sign as false in order to do the while loop
    bool validInput;
    int userChoice;//the choice that user enter in command
    string fileName;//the input filename of ppm file
    string filePath;//the output file path of current ppm file
    PpmImgClass ppmImageClass;//the ppm image loaded
    bool endProgram = false;//represents if user wants to exit

    //check command line argument
    //and make sure that the mpp file could be read successfully
    if (argc != EXPECTED_ARG_COUNT) {
        cout << "Usage: " << argv[PROGRAM_NAME_ARG_INDEX] << " " << "<startPPM.ppm>" << endl;
        exit(INVALID_ARG_EXIT_CODE_TWO);
    } else {
        cout << "Reading initial image from: " << argv[INPUT_FILE_ARG_INDEX] << endl;
        fileName = argv[INPUT_FILE_ARG_INDEX];
    }

    validInput = ppmImageClass.readPpmFile(fileName);
    if (!validInput) {
        cout << "Image read successful: No" << endl;
        cout << "Error: While reading the image, an error was encountered.";
        cout << " ";
        cout << "Exiting the program!" << endl;
        exit(INVALID_ARG_EXIT_CODE_THREE);
    } else {
        cout << "Image read successful: Yes" << endl;
    }

    while (!endProgram) {
        cout << "1. Encode a message from file" << endl;
        cout << "2. Perform decode" << endl;
        cout << "3. Write current image to file" << endl;
        cout << "4. Exit the program" << endl;

        //initialize a boolean sign to detect if the choice user enter is valid
        bool validUserChoice = false;
        while (!validUserChoice) {
            cout << "Enter your choice: ";
            validUserChoice = checkUserOneIntInput(userChoice);
        }
        //detect whether execute validly or not
        bool validExecute = false;

        //encode message from file
        if (userChoice == DEFAULT_VALUE_OF_ENCODE_MESSAGE) {
            validExecute = ppmImageClass.encodeImage();
            if (validExecute) {
                cout << "Message encode successful: Yes" << endl;
            }
        }

            //decode ppm image
        else if (userChoice == DEFAULT_VALUE_OF_PERFORM_DECODE) {
            validExecute = ppmImageClass.decodeImage();
            if (validExecute) {
                cout << "Image modified to decoded image contents" << endl;
            }
        }

            //write ppm image into some file
        else if (userChoice == DEFAULT_VALUE_OF_WRITE_IMAGE) {
            while (!validExecute) {
                cout << "Enter name of file to write image to: ";
                cin >> filePath;
                if (cin.fail()) {
                    cout << "Sorry, you should enter a string" << endl;
                    cin.clear();
                    cin.ignore(DEFAULT_IGNORE_NUM, '\n');
                } else {
                    validExecute = ppmImageClass.writeOutPpmFile(filePath);
                }
            }
            cout << "Image write successful: Yes" << endl;
        }

            //exit the program
        else if (userChoice == DEFAULT_VALUE_OF_EXIT_PROGRAM) {
            endProgram = true;
            cout << "Thanks for using this program!" << endl;
        } else {
            cout << "Sorry, your choice should be in 1 to 5." << endl;
            cout << "Please enter your choice again!" << endl;
            cout << endl;
        }
    }
    return 0;
}