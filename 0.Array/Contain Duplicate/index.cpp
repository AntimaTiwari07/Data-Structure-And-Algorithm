//leetcode question no. 217
//contain duplicate
/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     //sort the array 
    sort(nums.begin(),nums.end());
    for(int i = 0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            return true ;
            break;
        }
    }
    return false;
    }
};
int main(){
    vector<int>nums;
    Solution s1;
    s1.containsDuplicate(nums);
    return 0;
}
