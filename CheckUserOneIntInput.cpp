#include "CheckUserOneIntInput.h"

//this function is to check the user's input
//when there is only one inputs of int type
bool checkUserOneIntInput(int &choice) {
    cin >> choice;
    if (cin.fail()) {
        cout << endl;
        cout << "Your input should be int type" << endl;
        cin.clear();
        cin.ignore(DEFAULT_IGNORE_NUM, '\n');
        return false;
    } else {
        return true;
    }
}