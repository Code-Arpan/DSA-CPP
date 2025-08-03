#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Enter n : ";
    cin >> n;
    m = n - 1;
    


    for(int i=0; i<n; i++){
        for(int k=1; k<n-i; k++){
            cout << " ";
        }
        cout << "*";

        if (i !=0 ) {
            for(int j=0; j<(2*i - 1); j++){
                cout << " ";

            }
            cout << "*";
        }
        cout << endl;
    }

    for(int i=0; i<m; i++){
        for(int k=0; k<=i; k++){
            cout << " ";
        }
        cout << "*";

        if (i != (m-1)) {
            for(int j=0; j<(m - 2*i); j++){
                cout << " ";

            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
        
}
