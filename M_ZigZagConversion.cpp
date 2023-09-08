// https://leetcode.com/problems/zigzag-conversion/description/
// level - medium
// 6. Zigzag Conversion

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string str, int m) {

        vector<string> arr(m,"");
        int n = str.length();
        int i=0, j=0;
        bool check=true;
        while(n--){
            if(check){
                arr[i % m] += str[j];
                i++; 
            }
            else{
                arr[i % m] += str[j];
                i--;
            }
            if(i == m || i == -1){
                check = !check;
                if(!check) i -= 2;
                else i += 2;
            }
            j++;
        }
        string ans = "";
        for(int i=0; i<m; i++){
            ans += arr[i];
        }
        return ans;
        
    }
};

int main(){
    Solution obj;
    cout<<obj.convert("PAYPALISHIRING",3);
}