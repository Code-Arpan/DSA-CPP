#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec, int target) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
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
        vec.push_back(element);
    }

    cout << "Enter the element to search in the vector: ";
    int target;
    cin >> target;
    int result = linearSearch(vec, target);
    if(result != -1){
        cout << target << " found at index: " << result << endl;
    } else {
        cout << target << " not found in the vector." << endl;
    }

    return 0;
}