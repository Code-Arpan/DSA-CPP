#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0 && (num & (num - 1)) == 0) { // A number is a power of 2 if it is greater than 0 and the bitwise AND of the number and one less than the number is 0
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }
    
    return 0;
}