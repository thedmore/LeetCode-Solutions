// https://leetcode.com/problems/pascals-triangle/description/
// level - easy

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<vector<int>> generate(int numRows){
            vector<vector<int>> v(numRows);
            int numCols=1;
            for(int i=0; i<numRows; i++){
                v[i]=vector<int>(numCols);
                for(int j=0; j<numCols; j++){
                    if(j==0 || j==(numCols-1)) 
                        v[i][j] = 1;
                    else
                        v[i][j] = v[i-1][j-1] + v[i-1][j];
                } 
                numCols++;    
            }
            return v;
        }
};

int main(){
    Solution s;
    srand(time(0));
    int n = rand()%10;
    vector<vector<int>> vec;
    vec = s.generate(n);

    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}