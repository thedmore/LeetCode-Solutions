// https://leetcode.com/problems/move-zeroes/description/
// level - easy
// 283. Move Zeroes

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int idx=0;
        for(int i=0; i<nums.size(); i++)
            if(nums[i] != 0)
                swap(nums[idx++], nums[i]);          
    }
};

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> vec;
//         for(int i=0; i<n; i++)
//             if(nums[i] != 0)
//                 vec.push_back(nums[i]);
//         int m = vec.size();
//         int t = n - m;
//         while(t--)
//             vec.push_back(0);
//         nums = vec;    
//     }
// };

int main(){
    Solution s;
    vector<int> arr = {0,1,0,3,12};
    s.moveZeroes(arr);
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<" ";
}