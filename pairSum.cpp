#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int targetSum) {
    vector<int> result;
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while(i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > targetSum){
            j--;
        }
        else if(pairSum < targetSum){
            i++;
        }
        else{
            result.push_back(nums[i]);
            result.push_back(nums[j]);
            return result; // Return the first found pair
        }
    }
    
    return result; // Return empty if no pair found
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

    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;

    vector<int> result = pairSum(vec, targetSum);
    if(!result.empty()){
        cout << "Pair found: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found with the given target sum." << endl;
    }

    

    return 0;
}