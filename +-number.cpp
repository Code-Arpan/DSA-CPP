#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << (num >= 0 ? "Positve" : "Negative") << endl; //NOTE : Ternary operator for concise output

    return 0;
}