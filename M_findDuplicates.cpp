// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
// level - medium
// 442. Find All Duplicates in an Array

// not done in O(n) TC

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        set<int> s;
        vector<int> v;
        int temp = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            temp = nums[i];
            if (s.find(nums[i]) != s.end())
            {
                v.push_back(nums[i]);
            }
            else
            {
                s.insert(nums[i]);
            }
        }
        return v;
    }
};