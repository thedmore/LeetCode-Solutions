// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// level - easy

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> unique;
        for(int i=0; i<nums.size(); i++)
            unique.insert(nums[i]);
        nums.clear();
        nums.assign(unique.begin(), unique.end());    
        return nums.size();    
    }
};

int main(){
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4,10,10,7,7,7};
    // vector<int> nums = {1,1,2};
    int k = s.removeDuplicates(nums);
    cout<<"The number of unique elements in k are "<<k;
    return 0;
}