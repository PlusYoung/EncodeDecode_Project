#include "CheckUserTwoIntInput.h"

//this function is to check the user's input
//when there is two inputs of int type
bool checkUserTwoIntInput(int &firstInput, int &secondInput) {
    cin >> firstInput;
    if (cin.fail()) {
        cout << endl;
        cout << "Fail to input the first value" << endl;
        cout << "Your input should be int type" << endl;
        cin.clear();
        cin.ignore(DEFAULT_IGNORE_NUM, '\n');
        return false;
    }

    cin >> secondInput;
    if (cin.fail()) {
        cout << endl;
        cout << "Fail to input the second value" << endl;
        cout << "Your input should be int type" << endl;
        cin.clear();
        cin.ignore(DEFAULT_IGNORE_NUM, '\n');
        return false;
    }

    return true;
}