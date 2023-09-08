// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
// level - medium
// 3. Longest Substring Without Repeating Characters

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0, j=0;
        unordered_map<char,int> map;
        for(int i=0; i<s.length(); i++){
            if(map.count(s[i])!=0)
                j=max(j,map[s[i]]+1);
            map[s[i]]=i;
            maxi = max(maxi,i-j+1);
        }
        return maxi;
    }
};

int main(){
    Solution obj;
    // string str = "tmmzuxt";
    string str = "abcabcbb";
    // string str = "bbbbb";
    // string str = "";
    cout<<obj.lengthOfLongestSubstring(str);
}

