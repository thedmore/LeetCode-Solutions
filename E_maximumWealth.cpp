// https://leetcode.com/problems/richest-customer-wealth/description/
// level - easy
// 1672. Richest Customer Wealth

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = -1, sum = 0;
        for(int i=0; i<accounts.size(); i++){
            for(int j=0; j<accounts[i].size(); j++){
                sum += accounts[i][j];    
            }
            maxi = max(maxi, sum);
            sum = 0;
        }
        return maxi;
    }
};