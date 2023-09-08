// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/
// level - easy
// 1431. Kids With the Greatest Number of Candies

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = -1;
        vector<bool> result(candies.size(), false);
        for(int i:candies)
            maxi = max(maxi, i);
        for(int i=0; i<candies.size(); i++){
            if(candies[i] + extraCandies >= maxi)
                result[i] = true;
        } 
        return result;   
    }
};