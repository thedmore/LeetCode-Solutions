// https://leetcode.com/problems/majority-element/description/
// level - easy
// 169. Majority Element

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Do it again using Hash-map and also using Moore Voting algorithm

    int majorityElement(vector<int>& nums) {
        // solution 1 brute force (worst thinking)
        // if(nums.size() == 1) return nums[0];
        // sort(nums.begin(), nums.end());
        // int count = 1, i;
        // for(i=0; i<nums.size(); i++){
        //     if(nums[i] == nums[i+1]) count++;
        //     else count = 1;
        //     if(count > floor(nums.size()/2)) break;
        // }
        // return nums[i];

        
        // solution 2 brute force
        // int maxEle = INT_MIN;
        // for(int i=0; i<nums.size(); i++)
        //     maxEle = max(maxEle, nums[i]);
        
        // vector<int> vec(maxEle+1, 0);
        // vector<int> vec1(maxEle, 0);
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] >= 0) vec[nums[i]]++;
        //     else vec1[abs(nums[i])]++;
        // }
        
        // int i, j;
        // for(i=0; i<vec.size(); i++)
        //     if(vec[i] > floor(nums.size()/2)) break;
        // for(j=0; j<vec1.size(); j++)
        //     if(vec1[j] > floor(nums.size()/2)) break;
        // if(i>j) return i;
        // return i;    


        // solution 3
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};