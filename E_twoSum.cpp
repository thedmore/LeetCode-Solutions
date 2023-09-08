// https://leetcode.com/problems/two-sum/description/
// level - easy
// 1. Two Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int complement = 0;
        for(int i=0; i<nums.size(); i++)
            map[nums[i]] = i;
        for(int i=0; i<nums.size(); i++){
            complement = target - nums[i];
            if(map.count(complement)!=0){
                if(map[complement] != i)
                return {map[complement], i};
            }
        }
        return {};        
    }
};