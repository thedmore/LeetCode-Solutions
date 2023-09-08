// https://leetcode.com/problems/decode-xored-array/description/
// level - easy
// 1720. Decode XORed Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        for(int i=0; i<encoded.size(); i++){
            ans.push_back(encoded[i] ^ ans[i]);
        }
        return ans;
    }
};