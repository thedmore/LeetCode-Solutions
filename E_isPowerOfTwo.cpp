// https://leetcode.com/problems/power-of-two/description/
// level - easy
// 231. Power of Two

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        // solution 1
        int count = 0;
        if (n == 0)
            return false;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
                if (count == 2)
                {
                    return false;
                }
            }
            n = n >> 1;
        }
        return true;

        // solution 2
        // int ans=1;
        // for(int i=0; i<31; i++){
        //     if(ans == n)
        //         return true;
        //     if(ans < INT_MAX/2)
        //         ans = ans * 2;
        // }
        // return false;

        // solution 3
        // int ans;
        // for (int i = 0; i < 31; i++)
        // {
        //     ans = pow(2, i);
        //     if (ans == n)
        //         return true;
        // }
        // return false;
    }
};