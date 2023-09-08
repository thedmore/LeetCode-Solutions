// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/description/
// level - easy
// 1013. Partition Array Into Three Parts With Equal Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int value=0, sum=0, count=0;
        for(int x : arr) sum += x;
        if(sum % 3 != 0) return false;
        int part = sum/3;
        for(int i : arr){
            value += i;
            if(value == part){
                count++;
                value = 0;
            }
        }
        if(count >= 3) return true;
        return false;     
    }
};