#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    bool isNumeric = true;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] < '0' || input[i] > '9') {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "Input is a numeric constant." << endl;
    else
        cout << "Input is NOT a numeric constant." << endl;


}

