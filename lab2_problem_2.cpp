#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    cout << "Operators found: ";
    for (int i = 0; i < input.length(); i++) {
            char ch= input[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            cout << ch << " ";
        }
    }
    cout << endl;

    return 0;
}
