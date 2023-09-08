// https://leetcode.com/problems/number-of-employees-who-met-the-target/description/
// level - easy
// 2798. Number of Employees Who Met the Target

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt = 0;
        for(int i=0; i<hours.size(); i++)
            if(hours[i] >= target)
                cnt++;
        return cnt;        
    }
};