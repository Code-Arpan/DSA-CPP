#include <iostream>
using namespace std;

int main(){
    int size1, size2;
    cout << "Enter the size of the first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter the elements of the first array: " << endl;
    for(int i = 0; i < size1; i++){
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter the elements of the second array: " << endl;
    for(int i = 0; i < size2; i++){
        cin >> arr2[i];
    }

    cout << "Intersection of the two arrays is: " << endl;

    for(int i =0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i] ==  arr2[j]){ // found intersection
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}