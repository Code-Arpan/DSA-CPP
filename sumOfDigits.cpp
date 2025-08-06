#include <iostream>
using namespace std;

int digitSum(int m){
    int s=0;
    while (m>0){
        s += m%10;
        m /= 10;
    }
    return s;
}

int main(){
    int n;
    cout << "Enter N = ";
    cin >> n;

    cout << "Sum of digits of " << n << " = " << digitSum(n) << endl;
    return 0;
}