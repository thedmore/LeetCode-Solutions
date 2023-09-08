// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/
// level - easy
// 2535. Difference Between Element Sum and Digit Sum of an Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumNums = 0, sumDigits = 0;
        for(int i=0; i<nums.size(); i++)
            sumNums += nums[i];
        for(int i=0; i<nums.size(); i++){
            while(nums[i]){
                int rem = nums[i]%10;
                sumDigits += rem;
                nums[i] /= 10;
            }
        }
        int ans = abs(sumNums - sumDigits);
        return ans;
    }
};