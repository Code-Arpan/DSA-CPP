#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 97 && ch <= 122) {  //NOTE: Example of Implicit Type Conversion (Compiler itself converts char to int)
        // ASCII values: 'a' = 97, 'z' = 122
        cout << "Lowercase Character" << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase Character" << endl;
    } else {
        cout << "Character is not an alphabet." << endl;
    }

    return 0;
}