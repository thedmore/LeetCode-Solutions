// https://leetcode.com/problems/reverse-string/description/
// level - easy
// 344. Reverse String

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        // int i=0, j=s.size()-1;
        // while(i<j)
        //     swap(s[i++], s[j--]);
        reverse(s.begin(), s.end());
    }
};