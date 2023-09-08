// https://leetcode.com/problems/length-of-last-word/description/
// level - easy
// Length of Last Word

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0, flag=1;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == ' '){
                if(flag) continue;
                else break;
            }
            else{
                count++;
                flag = 0;
            }    
        }
        return count;
    }
};
