//3195. Find the Minimum Area to Cover All Ones I
/*
You are given a 2D binary array grid. Find a rectangle with horizontal and vertical sides with the smallest area, such that all the 1's in grid lie inside this rectangle.

Return the minimum possible area of the rectangle.

 

Example 1:

Input: grid = [[0,1,0],[1,0,1]]

Output: 6

Explanation:



The smallest rectangle has a height of 2 and a width of 3, so it has an area of 2 * 3 = 6.

Example 2:

Input: grid = [[1,0],[0,0]]

Output: 1

Explanation:



The smallest rectangle has both height and width 1, so its area is 1 * 1 = 1.

 

Constraints:

1 <= grid.length, grid[i].length <= 1000
grid[i][j] is either 0 or 1.
The input is generated such that there is at least one 1 in grid.
*/
#include<iostream>
using namespace std;
class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int l = 0;
        int b = 0;
        bool rowfound;
        bool colfound;
        //check in row
        for(int i = 0;i<grid.size();i++){
            rowfound = false;
            for(int j = 0;j<grid[i].size();j++){
                if(grid[i][j] ==1)  rowfound = true;
            } 
            if(rowfound==true) l++;        
        }
        //check in column
        int min=0;
        int maxi = 0;
        for(int i = 0;i<grid[0].size();i++){
            for(int j = 0;j<grid.size();j++){
                if(grid[j][i] ==1) {
                    if(min==0) min = j+1;
                    maxi = j+1;
                }
            } 
            b = max(min,maxi)  ;   
        }
           return (l*b);
    }
};
int main(){
    vector<vector<int>> grid;
    Solution s1;
    s1.minimumArea(grid);
}