#include <iostream>
using namespace std;

int fac(int m){
    int f = 1;
    for(int i=1; i<=m; i++){
        f *= i;
    }
    return f;
}

int nCr(int n, int r){
    int sol = fac(n)/(fac(n-r)*fac(r));
    return sol;
}

int nPr(int n, int r){
    int sol = fac(n)/fac(n-r);
    return sol;
}

int main(){
    int n, r;
    cout << "Enter n = ";
    cin >> n;
    cout << "Enter r = ";
    cin >> r;

    if(n>0 && r>0 && r<=n){
        cout << n << "C" << r << " = " << nCr(n, r) << endl;
        cout << n << "P" << r << " = " << nPr(n, r) << endl;
    } else{
        cout << "Invalid n & r values! Try Again.";
    }

    return 0;
}