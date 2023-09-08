// https://leetcode.com/problems/rotate-array/description/
// level - medium
// 189. Rotate Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin()+n, nums.end());
        reverse(nums.begin(), nums.begin()+n);
    }
};

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> temp(nums.size());
//         for(int i=0; i<nums.size(); i++)
//             temp[(i+k)%nums.size()] = nums[i];
//         nums = temp;    
//     }
// };

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         deque<int> dq;
//         for(int i=0; i<n; i++)
//             dq.push_back(nums[i]);
//         while(k--){
//             dq.push_front(dq.back());
//             dq.pop_back();
//         }    
//         for(int i=0; i<n; i++)
//             nums[i] = dq[i];
//     }
// };

int main(){
    Solution s;
    vector<int> vec = {1,2,3,4,5,6,7};
    s.rotate(vec, 10);
}