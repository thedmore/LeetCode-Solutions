// https://leetcode.com/problems/single-number/description/
// level - easy
// 136. Single Number

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans ^= nums[i];
        }
        return ans;

        // int j=0;
        // int temp = arr[j], count = 0, flag=0;
        // for(int i=0; i<size; i++){
        //     if(temp == arr[i]){
        //         count++;
        //     }
        //     if(count == 2){
        //         temp = arr[j++];
        //         i=-1;
        //         count=0;
        //     }
        //     if(count == 1)
        //         flag=1;
        // }
        // if(flag)
        //     return temp;
    }
};