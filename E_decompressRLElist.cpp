// https://leetcode.com/problems/decompress-run-length-encoded-list/description/
// level - easy
// 1313. Decompress Run-Length Encoded List

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i+=2){
            for(int j=1; j<=nums[i]; j++){
                ans.push_back(nums[i+1]);
            }
        }
        return ans;
    }
};