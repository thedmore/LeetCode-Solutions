// https://leetcode.com/problems/find-the-middle-index-in-array/description/
// level - easy
// 1991. Find the Middle Index in Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftSum=0, rightSum=0, n=nums.size();
        for(int i : nums)
            rightSum += i;
        for(int i=0; i<n; i++){
            leftSum += nums[i];
            if(leftSum == rightSum) return i;
            rightSum -= nums[i];
        } 
        return -1;   
    }
};