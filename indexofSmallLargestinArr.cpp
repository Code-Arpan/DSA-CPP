#include <iostream>
#include <climits>
using namespace std;

int indexof(int arr[], int size, int num){ //Linear Search Function
    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            return i; // return the index if the number is found
        }
    }
    return -1; // return -1 if the number is not found
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int ar[size];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < size; i++){
        cin >> ar[i];
    }

    int smallest = INT_MAX; 
    int largest = INT_MIN;

    for(int i = 0; i < size; i++){ // Find smallest and largest elements
        smallest = min(smallest, ar[i]);
        largest = max(largest, ar[i]);
    }


    cout << "Index of Smallest element " << smallest << " is " << indexof(ar, size, smallest) << endl;
    cout << "Index of Largest element " << largest << " is " << indexof(ar, size, largest) << endl;




    return 0;
}