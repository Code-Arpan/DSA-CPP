#include <iostream>
#include <vector>
using namespace std;

int reverse(vector<int> &vec) { // Pass by reference by placing '&' here with vector 
    int start = 0;
    int end = vec.size() - 1;
    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }

    return 0;
}

int main(){
    vector<int> vec;
    cout << "Enter number of elements to insert in the vector: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the vector: " << endl;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        vec.push_back(element); // Insert elements into the vector
    }

    cout << "Reversed vector elements are: " << endl;
    reverse(vec);
    for(int i=0; i< vec.size(); i++){
        cout << vec[i] << " "; // Print the reversed vector elements
    }

    return 0;
}