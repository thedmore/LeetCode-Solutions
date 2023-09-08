// https://leetcode.com/problems/reverse-integer/description/
// level - medium
// 7. Reverse Integer

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int rem = 0, rev = 0;
        while (x != 0)
        {
            rem = x % 10;
            if (rev < (INT_MIN / 10) || rev > (INT_MAX / 10))
            {
                return 0;
            }
            rev = (rev * 10) + rem;
            x /= 10;
        }
        return rev;
    }
};

int main()
{
    Solution s;
    cout << s.reverse(2147483647);
}