#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    bool isPrime = true;
    cout << "Enter a positive integer: ";  
    cin >> n;
    
    for(int i =2; i*i <= n; i++) { // NOTE: Check for factors from 2 to sqrt(n) (Unique factors of any number n is from 1 to sqrt(n) so we have to check only till sqrt(n) for prime)
        if (n % i == 0) {
            cout << n << " is not a prime number." << endl;
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    }
    return 0;

}