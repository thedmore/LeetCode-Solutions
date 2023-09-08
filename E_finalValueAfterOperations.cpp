// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/
// level - easy
// 2011. Final Value of Variable After Performing Operations

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto op : operations){
            if(op == "++X" || op == "X++") x++;
            else x--;
        }
        return x;
    }
};