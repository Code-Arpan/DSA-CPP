#include <iostream>
using namespace std;

int sumN(int m){
    int s = (m*(m+1))/2;
    return s;
}

int main(){
    int n;
    cout << "Enter N = ";
    cin >> n;

    cout << "Sum of numbers from 1 to " << n << " = " << sumN(n) << endl;
    return 0;
}