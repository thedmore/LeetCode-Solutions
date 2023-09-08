// https://leetcode.com/problems/number-of-1-bits/description/
// level - easy
// 191. Number of 1 Bits

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        for (int i = 0; i < 32; i++)
        {
            if (n & 1)
                count++;
            n = n >> 1;
        }
        return count;
    }
};