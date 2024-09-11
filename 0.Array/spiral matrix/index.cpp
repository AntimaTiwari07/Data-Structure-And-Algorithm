//leetCode question no 54
//Spiral Matrix
/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
      int row1 = 0;
      int row2 = matrix.size()-1;
      int col1 = 0;
      int col2 = matrix[0].size()-1;
      while(((col1 < matrix[0].size())  && (row1 < matrix.size()) ) && (row2 >=0) &&(col2>=0)){
      //row 1
      if(col1<=col2){
       for(int i = col1;i<=col2;i++)   v.push_back(matrix[row1][i]);
      }
      else break;
      //last col
      if((row1+1)<=row2){
     for(int i = row1+1;i<=row2;i++)  v.push_back(matrix[i][col2]);
      }
      else break;
      //last row
      if((col2-1)>=col1){
     for(int i = col2-1;i>=col1;i--) v.push_back(matrix[row2][i]);
      }
      else break;
   
     //first col
      if((row2-1)>row1){
     for(int i = row2-1;i>row1;i--) v.push_back(matrix[i][col1]);
      }
      else break;
    
      row1 ++;
      col1++;
       col2--;
        row2--;
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return v;
    }
};
int main(){
    vector<vector<int>> matrix;
    Solution s1;
    s1.spiralOrder(matrix);
}