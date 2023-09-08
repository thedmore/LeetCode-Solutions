// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/
// level - easy
// 1365. How Many Numbers Are Smaller Than the Current Number

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr(101,0);
        for(int i:nums)
            arr[i]++;
        for(int i=1; i<101; i++)
            arr[i] += arr[i-1];
        for(int i=0; i<nums.size(); i++)
            nums[i] = (nums[i]==0) ? 0 : arr[nums[i]-1];  
        return nums;            
    }
};

// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         vector<int> vec = nums;
//         sort(vec.begin(), vec.end());
//         unordered_map<int,int> map;
//         for(int i=0; i<vec.size(); i++)
//             if(map.count(vec[i]) == 0)
//                 map[vec[i]] = i;
//         for(int i=0; i<nums.size(); i++){
//             vec[i] = map[nums[i]];
//         } 
//         return vec;   
//     }
// };