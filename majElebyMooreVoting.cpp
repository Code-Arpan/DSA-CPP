#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums) {
    int freq = 0, majority=0;
    for(int i=0; i<nums.size(); i++){ // Boyer-Moore Voting Algorithm , Time complexity: O(n), Space complexity: O(1)
        if(freq == 0){
            majority = nums[i];
        }
        if(nums[i] == majority){
            freq++;
        } else {
            freq--;
        }
    }       
    // above code is for those questions where majority element is always present
    // below code is an add on for those questions where majority element may or may not be present
    int count = 0;
    for(int val: nums){
        if(val == majority){
            count++;
        }
    }
    if(count > nums.size()/2){
        return majority; // Return the majority element
    } else {
        return -1; // No majority element
    }
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

    int majority = majorityElement(vec);
    cout << "The majority element is: " << majority << endl;

    return 0;
}