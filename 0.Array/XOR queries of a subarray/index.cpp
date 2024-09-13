//1310.  leetcode question
//XOR Queries of a Subarray
/*
You are given an array arr of positive integers. You are also given the array queries where queries[i] = [lefti, righti].

For each query i compute the XOR of elements from lefti to righti (that is, arr[lefti] XOR arr[lefti + 1] XOR ... XOR arr[righti] ).

Return an array answer where answer[i] is the answer to the ith query.

 

Example 1:

Input: arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
Output: [2,7,14,8] 
Explanation: 
The binary representation of the elements in the array are:
1 = 0001 
3 = 0011 
4 = 0100 
8 = 1000 
The XOR values for queries are:
[0,1] = 1 xor 3 = 2 
[1,2] = 3 xor 4 = 7 
[0,3] = 1 xor 3 xor 4 xor 8 = 14 
[3,3] = 8
Example 2:

Input: arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]
Output: [8,0,4,4]
 

Constraints:

1 <= arr.length, queries.length <= 3 * 104
1 <= arr[i] <= 109
queries[i].length == 2
0 <= lefti <= righti < arr.length
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>v;
      //to traverse each element by taking size of queries
      for(int i = 0;i<queries.size();i++){
        //find xor of each element if both left and right are equal then
        if(queries[i][0]==queries[i][1]){
              v.push_back(arr[queries[i][0]]);
        }
        //if left and right queries are diff
        else{
             int m = arr[queries[i][0]] ;
      for(int j = queries[i][0];j<queries[i][1];j++){
             m = m ^ (arr[j+1]);// ^ is a XOR operator 
             //in this 2 same bit give 0 while diff give 1 
      }
      v.push_back(m);//use vector to store element 
      //because inn this we not have to give size of array 
      //we just simply use it
        }
        
       }
       return v;
      
    }
};
int main(){
    vector<int> arr; 
    vector<vector<int>> queries;
    Solution s1;
    s1.xorQueries(arr,queries);
}
