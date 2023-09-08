// https://leetcode.com/problems/find-pivot-index/description/
// level - easy
// 724. Find Pivot Index

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int suml=0, sumr=0;
        int n = nums.size();

        // TC: O(n^2)
        // for(int i=0; i<n; i++){
        //     if(i != 0){
        //         for(int j=0; j<i; j++) suml += nums[j];
        //     }
        //     if(i != n-1){
        //         for(int j=i+1; j<n; j++) sumr += nums[j];
        //     }
        //     if(i == 0 && sumr == 0) return 0;
        //     else if(i == n-1 && suml == 0) return n-1;
        //     else if(suml == sumr) return i;
        //     suml=0, sumr=0;
        // }
        // return -1;

        // TC: O(n)
        for(int i : nums)
            sumr += i;
        for(int i=0; i<n; i++){
            suml += nums[i];
            if(suml == sumr) return i;
            sumr -= nums[i];
        }
        return -1;    
    }
};

int main(){
    Solution obj;
    vector<int> vec = {2,4,-6,2};
    // vector<int> vec = {1,2,3};
    // vector<int> vec = {1,7,3,6,5,6};
    cout<<"The pivot index is "<<obj.pivotIndex(vec);
    return 0;
}