// https://leetcode.com/problems/sqrtx/description/
// level - easy 
// 69. Sqrt(x)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int s = 1, e = x;
        while(s <= e){
            int mid = s + (e - s) / 2;
            if(mid == x/mid)
                return mid;
            else if(mid > x/mid)
                e = mid - 1;
            else 
                s = mid + 1;        
        }
        return s-1;
    }

    double withPrecision(int n, int ans, int p){
        double factor = 1;
        double preciseAns;
        for(int i=0; i<p; i++){
            factor /= 10;
            for(double j=ans; j*j<n; j+=factor)
                preciseAns = j;
        }
        return preciseAns;
    }
};

int main(){
    Solution obj;
    int ans = obj.mySqrt(6);
    cout<<"Floor value of square root of 6: "<<ans<<endl;
    cout<<"Square root of 6 with precision 3: "<<obj.withPrecision(6,ans,3)<<endl;
}