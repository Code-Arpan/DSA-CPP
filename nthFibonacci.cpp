#include <iostream>
using namespace std;

int nFib(int m){
    int x=0, y=1, z;

    if (m == 1) {
        return x;
    } else {
        for(int i = 0; i<m-2; i++){
        z = x + y;
        // cout << z << " ";
        x = y;
        y = z;  
    }
    cout << endl;
    return y;
        
    }

    
}

int main(){
    int n;
    cout << "Welcome User! This program gives you the Nth number of Fibonacci Series." << endl;
    cout << "Enter N = ";
    cin >> n;

    cout << n << "th number of Fibonacci Series is " << nFib(n) << endl;
    return 0;
}