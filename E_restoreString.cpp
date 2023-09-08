// https://leetcode.com/problems/shuffle-string/description/
// level - easy
// 1528. Shuffle String

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        string str(n,0);
        for(int i=0; i<n; i++){
            str[indices[i]] = s[i];
        }
        return str;
    }
};

// class Solution {
// public:
//     string restoreString(string s, vector<int>& indices) {
//         string str;
//         vector<string> vec(s.length());
//         for(int i=0; i<s.length(); i++){
//             vec[indices[i]] = s[i];
//         }
//         for(int i=0; i<vec.size(); i++){
//             str += vec[i];
//         }
//         return str;
//     }
// };