//Minimum Time Difference
// 539 no.question
/*
Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
 

Example 1:

Input: timePoints = ["23:59","00:00"]
Output: 1
Example 2:

Input: timePoints = ["00:00","23:59","00:00"]
Output: 0
 

Constraints:

2 <= timePoints.length <= 2 * 104
timePoints[i] is in the format "HH:MM".
*/
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //store minutes
       vector<int>minutes;
       //convert string into minitues
       for(int i = 0;i<timePoints.size();i++){
        //conver and store hour
        //to traverse in each string in a vector of string use = a[i][j]
            int store_hr = (timePoints[i][0]-'0')*10 + (timePoints[i][1]-'0') ;
            minutes.push_back(((store_hr )* 60)+((timePoints[i][3]-'0')*10 +  timePoints[i][4]-'0'));
       }
       //sort the minutes to avoid multiple loop
       sort(minutes.begin(),minutes.end());
       int minimum = INT_MAX;
       for(int i= 0;i<minutes.size()-1;i++){
        if((abs(minutes[i]-minutes[i+1]))<minimum) {
           minimum = abs(minutes[i]-minutes[i+1]);
        }
       }
       //check edge case circular check
       int day_min = 24*60;
       minimum = min(minimum,day_min-(minutes[minutes.size()-1]-minutes[0]));
       return minimum;

    }
};
int main(){
    vector<string> timePoints;
    Solution s1;
    s1.findMinDifference(timePoints);
}
