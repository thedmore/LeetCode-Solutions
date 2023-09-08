// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
// level - easy
// 1281. Subtract the Product and Sum of Digits of an Integer

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0, mul = 1, rem = 0;
        while (n != 0)
        {
            rem = n % 10;
            sum += rem;
            mul *= rem;
            n /= 10;
        }
        return (mul - sum);
    }
};