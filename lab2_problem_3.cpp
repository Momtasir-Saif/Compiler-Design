
#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    if (input == "//") {
        cout << "// Single line comment" << endl;
    }
    else if (input == "/*") {
        cout << "/* Multiple line comment */" << endl;
    }
    else {
        cout << "No Line Comment" << endl;
    }


}
