#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> nums) {
    sort(nums.begin(), nums.end()); //Time complexity: O(n log n)
    int freq = 1, majority=nums[0], n=nums.size();

    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
            
        } else {
            freq = 1; // Reset frequency for new element
            majority = nums[i];
        }
        if(freq > n/2){
                return majority; // Return the majority element
            }
    }
    
    
    return majority; // Return the majority element

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