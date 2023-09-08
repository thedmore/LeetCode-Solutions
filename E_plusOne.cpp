// https://leetcode.com/problems/plus-one/description/
// level - easy
// Plus One 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i] != 9){
                digits[i] += 1;
                break;
            }    
            else 
                digits[i] = 0;
        }
        
        if(digits[0] == 0)
            digits.insert(digits.begin(), 1);
        
        return digits;
    }
};

int main(){
    Solution s;
    vector<int> vec = {9,9,9};
    s.plusOne(vec);
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
}