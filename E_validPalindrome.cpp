// https://leetcode.com/problems/valid-palindrome/description/
// level - easy
// 125. Valid Palindrome

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isAlphaNumeric(char c){
        if((c>=48 && c<=57) or (c>=97 && c<=122)) return true;
        return false;
    }
public:
    bool isPalindrome(string s) {
        // first method
        // string str = "";
        // for(int i=0; i<s.length(); i++){
        //     if((s[i]>=48 && s[i]<=57) || (s[i]>=97 && s[i]<=122))
        //         str += s[i];
        //     else if(s[i]>=65 && s[i]<=90)
        //         str += tolower(s[i]);    
        // }
        // int i=0, j=str.length()-1;
        // while(i<j){
        //     if(str[i++] != str[j--])
        //         return false;
        // }
        // return true;

        // second method, we can also use iswalnum() to check if the char is alphanumeric or not
        for(int i=0; i<s.length(); i++)
            s[i] = tolower(s[i]);
        int i=0, j=s.length()-1;
        while(i<j){
            if(isAlphaNumeric(s[i]) and isAlphaNumeric(s[j])){
                if(s[i]!=s[j]) return false;
                i++, j--;
            }
            else if(isAlphaNumeric(s[i])) j--;
            else i++;
        }    
        return true;
    }
};