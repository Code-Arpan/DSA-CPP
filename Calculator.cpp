#include<iostream>
using namespace std;

int main()
{
    int ch;
    float a, b, op;
    
    cout << "Welcome to Calculator!" << endl;
    cout << "Enter number 1 : ";
    cin >> a;
    cout << "Enter number 2 : ";
    cin >> b;
    cout << " 1. Sum\n 2. Substract\n 3. Multiply\n 4. Divide\n 5. Remainder " << endl;
    cout << "Select Operation : ";
    cin >> ch;

    if(ch == 1){
        op = a + b;
    }else if(ch == 2){
        op = a - b;
    }else if(ch == 3){
        op = a * b;
    }else if(ch == 4){
        op = a / b;
    }else if(ch == 5){
        op = (int)a % (int)b;
    }

    cout << "Result of Operation = " << op << endl;


    return 0;
}

