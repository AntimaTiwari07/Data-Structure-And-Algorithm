//74.leetcode question
// Search a 2D Matrix
/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false;
        int row =matrix.size();
            int col = matrix[0].size();
        int sp = 0;
        int endp = (col*(row-1))+ (col-1);
        int midp = (sp+endp)/2;
        while(sp<=endp){
            midp = (sp+endp)/2;
            if(matrix[midp/col][midp%col]==target){
                found = true;
                break;
            }
            else if(matrix[midp/col][midp%col]>target){
                endp = midp-1;
            }
            else{
                sp = midp+1;
            }
        }
        return found;
        
    }
};
int main(){
    vector<vector<int>>matrix;
    int target;
    Solution s1;
    s1.searchMatrix(matrix,target);
}