#include <iostream>
using namespace std;

int binaryToDecimal(int bi) {
    int dec = 0, pow = 1;
    while (bi > 0) {
        int rem = bi % 10;  // Get the last digit
        bi /= 10; // Remove the last digit   
        dec += rem * pow;  // Convert binary digit to decimal
        pow *= 2;          // Increase power of 2
    }   
    return dec;
}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << "Decimal number: " << binaryToDecimal(n) << endl;
    return 0;
}