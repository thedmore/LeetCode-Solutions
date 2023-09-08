// https://leetcode.com/problems/add-binary/description/
// level - easy 
// Add Binary

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalizeLength(string &a, string &b){
        int len1 = a.size();
        int len2 = b.size();

        if(len1 < len2){
            for(int i=0;i<len2-len1;i++)
                a = '0' + a;
            return b.size();    
        }
        else if(a.size()>b.size()){
            for(int i=0;i<len1-len2;i++)
                b = '0' + b;
        }
        return a.size();
    }

    string addBinary(string a, string b) {
        
        int length = equalizeLength(a, b);
        int carry=0, sum=0;
        string result;
        
        for(int i=length-1; i>=0; i--){
            int bit1 = a.at(i) - '0';
            int bit2 = b.at(i) - '0';
            sum = (bit1^bit2^carry) + '0';
            result = (char)sum + result;
            carry = (bit1&bit2) | (bit1&carry) | (bit2&carry);
        }
        if(carry)
            result = '1' + result;
        return result;

        // if(a.size() < b.size())
        //     swap(a,b);
        // while(b.size() < a.size())
        //     b = '0' + b;    
        // int carry=0, sum=0;
        // string result;
        
        // for(int i=b.size()-1; i>=0; i--){
        //     if(a[i]=='0' && b[i]=='0'){
        //         if(carry==1){ sum=1+'0'; carry=0;}
        //         else sum=0+'0';
                
        //     }
        //     else if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0')){
        //         if(carry==1){ sum=0+'0'; carry=1;}
        //         else{ sum=1+'0';
        //          }
        //     }
        //     else{
        //         if(carry==1){ sum=1+'0'; }
        //         else sum=0+'0';
        //         carry=1;
        //     }
        //     result = (char)sum + result;
        // }
        
        // if(carry)
        //     result = '1' + result;    
        // return result;
        
    }
};

int main(){
    Solution s;
    string a="1";
    string b="111";
    string c = s.addBinary(a, b);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}