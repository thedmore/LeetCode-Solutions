// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
// level - easy
// index of the first occurence in a string


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int strStr(string haystack, string needle){
            int j=0, idx, count=0, flag=0;
            
            if(haystack.size() < needle.size()) return -1;

            while(j < (haystack.size()-needle.size()+1)){
                if(needle[0] == haystack[j]){
                    idx = j;
                    for(int i=0; i<needle.size(); i++){
                        if(needle[i] != haystack[j++]){
                            count = 0;
                            break;
                        }
                        else count++;
                    }
                    j = idx;
                }
                if(count == needle.size()){
                    flag = 1;
                    break;
                }
                j++;
            }
            
            if(flag) return idx;
            else return -1;
        }
};

int main(){
    Solution s;
    string haystack = "mississippi";
    string needle = "issip";
    cout<<needle<<" found at index "<<s.strStr(haystack, needle);
    return 0;
}