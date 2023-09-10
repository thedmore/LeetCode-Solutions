// https://leetcode.com/problems/string-to-integer-atoi/description/
// level - medium
// 8. String to Integer (atoi)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        double ans=0, flag=0;
        int i=0, pos=0, neg=0;
        while(s[i] == ' ') i++;
        while(s[i] == '+'){
            pos++;
            i++;
        }
        while(s[i] == '-'){
            neg++;
            i++;
        }
        for(; i<s.length(); i++){
            if(s[i] == '-') flag=1;
            if(s[i]>=48 && s[i]<=57){
                ans = ans*10 + s[i] - '0';
            }
            else break;
        }
        if(neg>0 and pos>0 or pos>1 or neg>1) return 0;
        if(neg>0) ans = -ans;
        if(ans > INT_MAX) ans = INT_MAX;
        if(ans < INT_MIN) ans = INT_MIN;
        return (int)ans;
    }
};