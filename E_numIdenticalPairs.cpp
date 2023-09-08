// https://leetcode.com/problems/number-of-good-pairs/description/
// level - easy
// 1512. Number of Good Pairs

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> map;
        for(int i:nums)
            map[i] = -1;
        for(int i=0; i<nums.size(); i++){
            if(map.count(nums[0]) != 0)
                map[nums[i]]++;
            ans += map[nums[i]];     
        }
        return ans;    
    }
};

// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
//         int ans = 0, freq[101] = {0};
//         for(int i : nums){
//             ans += freq[i];
//             freq[i] += 1;
//         }
//         return ans;
//     }
// };