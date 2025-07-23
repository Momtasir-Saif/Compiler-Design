#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    bool isValid = true;


    if (input.length() == 0) {
        isValid = false;
    }

    else if (!((input[0] >= 'A' && input[0] <= 'Z') ||
               (input[0] >= 'a' && input[0] <= 'z') ||
               input[0] == '_')) {
        isValid = false;
    }
    else {

        for (int i = 1; i < input.length(); i++) {
            char ch = input[i];
            if (!((ch >= 'A' && ch <= 'Z') ||
                  (ch >= 'a' && ch <= 'z') ||
                  (ch >= '0' && ch <= '9') ||
                  ch == '_')) {
                isValid = false;
                break;
            }
        }
    }

    if (isValid)
        cout << "Input is a valid identifier." << endl;
    else
        cout << "Input is NOT a valid identifier." << endl;


}
