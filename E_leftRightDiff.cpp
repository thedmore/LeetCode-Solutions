// https://leetcode.com/problems/left-and-right-sum-differences/description/
// level - easy
// 2574. Left and Right Sum Differences

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftSum=0, rightSum=0, n=nums.size();
        vector<int> answer(n);
        for(int x : nums)
            rightSum += x;
        for(int i=0; i<n; i++){
            rightSum -= nums[i];
            answer[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }    
        return answer;
    }
};