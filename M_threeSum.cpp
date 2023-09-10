// https://leetcode.com/problems/3sum/description/
// level - medium 
// 15. 3Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            int j = i+1, k = nums.size()-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while(j+1<k and nums[j] == nums[j+1]) j++;
                    while(j<k-1 and nums[k] == nums[k-1]) k--;
                    j++, k--;
                }
                else if(sum > 0) k--;
                else j++;
            }
            while(i<nums.size()-1 and nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>> s;
//         sort(nums.begin(), nums.end());
//         for(int i=0; i<nums.size()-2; i++){
//             int j = i+1, k = nums.size()-1;
//             while(j<k){
//                 int sum = nums[i] + nums[j] + nums[k];
//                 if(sum == 0){
//                     s.insert({nums[i], nums[j], nums[k]});
//                     j++, k--;
//                 }
//                 else if(sum > 0) k--;
//                 else j++;
//             }
//         }
//         vector<vector<int>> ans;
//         for(auto i:s) ans.push_back(i);
//         return ans;
//     }
// };