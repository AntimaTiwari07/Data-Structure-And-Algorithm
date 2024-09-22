//169. 
//Majority Element

/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        //my first approach (brute force)
        int ans = 0;
        //to count no. of element
        int count ;
        //iterate through each no;
        for(int i = 0;i<nums.size();i++){
            count = 0;
            //check if equal or not
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            //check count is greater then n/2
            if((count+1)>((nums.size()-1)/2)){
                    ans = nums[i];
                    break;
            } 
        }
        return ans;
        */
        int freq = 0,ans=0;
        for(int i = 0;i<nums.size();i++){
            if(freq==0){
                ans = nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};
int main(){
    vector<int>nums;
    Solution s1;
    s1.majorityElement(nums);
}