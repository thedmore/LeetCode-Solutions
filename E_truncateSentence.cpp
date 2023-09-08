// https://leetcode.com/problems/truncate-sentence/description/
// level - easy
// 1816. Truncate Sentence

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        string str;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == ' '){
                count++;
            }
            if(count == k){
                break;
            }
            str.push_back(s[i]);
        }
        return str;    
    }
};