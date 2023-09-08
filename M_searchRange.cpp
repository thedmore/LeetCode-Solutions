// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
// level - medium 
// 34. Find First and Last Position of Element in Sorted Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // 0 ms, 13.7 mb
        vector<int> vec(2,-1);

        int s = 0, e = nums.size()-1;
        int mid = s + (e - s) / 2;

        while(s <= e){
            if(nums[mid] == target){
                vec[0] = mid;
                e = mid - 1;
            }
            else if(target > nums[mid])
                s = mid + 1;
            else if(target < nums[mid])
                e = mid - 1;
            mid = s + (e - s) / 2;        
        }

        s = 0, e = nums.size()-1;
        mid = s + (e - s) / 2;

        while(s <= e){
            if(nums[mid] == target){
                vec[1] = mid;
                s = mid + 1;
            }
            else if(target > nums[mid])
                s = mid + 1;
            else if(target < nums[mid])
                e = mid - 1;
            mid = s + (e - s) / 2;        
        }

        return vec;

        // 8 ms, 13.6 mb
        // vector<int> vec;
        // int first = -1, second = -1;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] == target){
        //         if(first == -1){
        //             first = i;
        //             second = i;
        //         }
        //         else second = i;
        //     }
        // }
        // vec.push_back(first);
        // vec.push_back(second);
        // return vec;
        
        // 12 ms, 13.60 mb
        // vector<int> vec(2,-1);
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] == target){
        //         vec[0] = i;
        //         break;
        //     }
        // }
        // for(int i=nums.size()-1; i>=0; i--){
        //     if(nums[i] == target){
        //         vec[1] = i;
        //         break;
        //     }
        // }
        // return vec;
    }
};