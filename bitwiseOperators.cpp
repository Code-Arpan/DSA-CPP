#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Bitwise AND: " << (a & b) << endl;
    cout << "Bitwise OR: " << (a | b) << endl;
    cout << "Bitwise XOR: " << (a ^ b) << endl;
    
    cout << "Left Shift of " << a << " by " << b << " Spaces : " << (a << b) << endl; // Left shift operator uses formula a << b = a * 2^b
    cout << "Right Shift of " << a << " by " << b << " Spaces : " << (a >> b) << endl; // Right shift operator uses formula a >> b = a / 2^b
    return 0;
}
