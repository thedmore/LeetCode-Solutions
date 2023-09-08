// https://leetcode.com/problems/remove-element/description/
// level - easy

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> vec(n);
        int j=0,count=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=val){
                vec[j++]=nums[i];
                count++;
            }
        }
        nums.clear();
        nums.assign(vec.begin(), vec.end());
        return count;   
    }
};
