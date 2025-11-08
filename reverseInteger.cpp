#include <iostream>
using namespace std;

int main() {
    unsigned int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    unsigned int reversedNum = 0;

    while(num>0){
        unsigned int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    cout << "Reversed Integer: " << reversedNum << endl;


    return 0;
}