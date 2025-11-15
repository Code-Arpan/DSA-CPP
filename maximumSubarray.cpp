#include <iostream>
#include <vector>
#include <climits>
using namespace std;

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

    int currSum = 0, maxSum = INT_MIN;
    for(int val : vec){
        currSum += val;
        maxSum = max(maxSum, currSum);
        if(currSum < 0){ //Kadane's Algorithm step to reset currSum if it goes negative because negative sum will not contribute to maximum sum subarray
            currSum = 0;
        }
    }
    cout << "The maximum subarray sum is: " << maxSum << endl;



    return 0;
}