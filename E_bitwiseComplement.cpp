// https://leetcode.com/problems/complement-of-base-10-integer/description/
// level - easy
// 1009. Complement of Base 10 Integer

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int m = n, mask = 0;
        if (n == 0)
            return 1;
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        return (~n & mask);
    }
};