//624. leetcode question
// Maximum Distance in Arrays
/*
You are given m arrays, where each array is sorted in ascending order.

You can pick up two integers from two different arrays (each array picks one) and calculate the distance. We define the distance between two integers a and b to be their absolute difference |a - b|.

Return the maximum distance.

 

Example 1:

Input: arrays = [[1,2,3],[4,5],[1,2,3]]
Output: 4
Explanation: One way to reach the maximum distance 4 is to pick 1 in the first or third array and pick 5 in the second array.
Example 2:

Input: arrays = [[1],[1]]
Output: 0
 

Constraints:

m == arrays.length
2 <= m <= 105
1 <= arrays[i].length <= 500
-104 <= arrays[i][j] <= 104
arrays[i] is sorted in ascending order.
There will be at most 105 integers in all the arrays.
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
       int maxi = INT_MIN;
       int min  = INT_MAX;
       int mini = -1;
       int maxindex = -1;
       //to find min and max
        for(int i = 0;i<arrays.size();i++){
            if(arrays[i][0]<min){
                min = arrays[i][0];
                mini = i;
            }
              if(arrays[i][(arrays[i].size()-1)]>maxi){
               maxi = arrays[i][(arrays[i].size()-1)];
               maxindex = i;
            }
        }
        cout<<min<<endl;
        cout<<maxi<<endl;
        int i = 0;
        int minans = INT_MAX;
        int maxans = INT_MIN;
      while(i<arrays.size()){
        //max
        if(i!=mini){
             if(arrays[i][(arrays[i].size()-1)]>maxans){
               maxans = arrays[i][(arrays[i].size()-1)];
            }
        }
        if(i!=maxindex){
             if(arrays[i][0]<minans){
                minans = arrays[i][0];
            }
        }
        i++;
      }
      
        return max((maxi-minans),(maxans-min));
    }
};
int main(){
    vector<vector<int>> arrays;
    Solution s1;
    s1.maxDistance(arrays);
    return 0;
}