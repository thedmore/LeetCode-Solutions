// https://leetcode.com/problems/merge-sorted-array/submissions/946777591/
// level - easy
// Merge Sorted Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m;
        for(int j=0; j<n; j++){
            nums1[i++] = nums2[j];
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    s.merge(nums1, nums1.size()-nums2.size(), nums2, nums2.size());
    for(int i=0; i<nums1.size(); i++)
        cout<<nums1[i]<<" ";
}