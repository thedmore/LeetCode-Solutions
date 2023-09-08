// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
// level - medium
// 852. Peak Index in a Mountain Array

#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int start = 0, end = arr.size()-1;
        int mid = start + (end-start)/2;
        while(start <= end){
            if(arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid+1])
                break;
            else if(arr[mid] < arr[mid-1])
                end = mid;
            else if(arr[mid] < arr[mid+1])
                start = mid;
            mid = start + (end-start)/2;            
        }
        return mid;
        // while(start < end){
        //     if(arr[mid] < arr[mid+1])
        //         start = mid+1;
        //     else 
        //         end = mid;
        //     mid = start + (end-start)/2;            
        // }
        // return start;
    }
};
