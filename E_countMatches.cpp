// https://leetcode.com/problems/count-items-matching-a-rule/description/
// level - easy
// 1773. Count Items Matching a Rule

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt = 0, k;
        for(int i=0; i<items.size(); i++){
            if(ruleKey == "type") k = 0; 
            else if(ruleKey == "color") k = 1; 
            else k = 2;

            if(items[i][k] == ruleValue) cnt++; 
        }
        return cnt;
    }
};