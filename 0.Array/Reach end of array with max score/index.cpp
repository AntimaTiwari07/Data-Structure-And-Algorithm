// LeetCode question no. 3282.
// Reach End of Array With Max Score
/*
You are given an integer array nums of length n.

Your goal is to start at index 0 and reach index n - 1. You can only jump to indices greater than your current index.

The score for a jump from index i to index j is calculated as (j - i) * nums[i].

Return the maximum possible total score by the time you reach the last index.

 

Example 1:

Input: nums = [1,3,1,5]

Output: 7

Explanation:

First, jump to index 1 and then jump to the last index. The final score is 1 * 1 + 2 * 3 = 7.

Example 2:

Input: nums = [4,3,1,3,2]

Output: 16

Explanation:

Jump directly to the last index. The final score is 4 * 4 = 16.

 

Constraints:

1 <= nums.length <= 105
1 <= nums[i] <= 105
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long  i=0;
        long long j = 1;
        long long sc  = 0;
       while((j<nums.size())){
        if(j==nums.size()-1) sc = sc +(nums.size()-1-i)*nums[i];
       else if(nums[j]>nums[i]){
            sc = sc + ((j-i)*(nums[i]));
         i=j;
        }
        j++;
       }

        return sc;
    }
};
int main(){
    vector<int>nums;
    Solution s1;
    s1.findMaximumScore(nums);

}
