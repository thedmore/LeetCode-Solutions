// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/
// level - easy
// 1662. Check If Two String Arrays are Equivalent

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "", str2 = "";
        for(auto i:word1)
            str1 += i;
        for(auto i:word2)
            str2 += i;
        if(str1 == str2) return true;
        return false;    
    }
};