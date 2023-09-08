// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
// level - easy
// 1752. Check if Array Is Sorted and Rotated

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1])
                count++;
        }
        if(nums[nums.size()-1] > nums[0]) count++;
        if(count == 0 || count == 1) return true;
        return false;
    }
};