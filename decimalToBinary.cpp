// Code for converting Decimal number to Binary number

#include <iostream>
using namespace std;

int decimalToBinary(int dec) {
    int rem, bi = 0, pow = 1;   
    while (dec > 0)
    {
        rem = dec % 2;  
        dec /= 2;
        bi += rem * pow;
        pow *= 10;
    }
    return bi;
}

int main() {
    int n;
    cout << "Enter a decimal number : ";
    cin >> n;

    cout << "Binary number : " << decimalToBinary(n) << endl;
    return 0;
}