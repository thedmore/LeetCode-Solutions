// https://leetcode.com/problems/set-matrix-zeroes/description/
// level - medium

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        void setZeroes(vector<vector<int>> &matrix){
            int m = matrix.size();
            int n = matrix[0].size();
            queue<pair<int,int>> q;

            for(int i=0; i<m; i++)
                for(int j=0; j<n; j++)
                    if(matrix[i][j] == 0)
                        q.push({i,j});

            while(!q.empty()){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
            
                for(int k=0; k<n; k++)
                    matrix[row][k] = 0;
                for(int k=0; k<m; k++)
                    matrix[k][col] = 0;
            }
        }    
};

int main()
{
    solution s;
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    vector<vector<int>>::iterator it = matrix.begin();

    for(int i=0; i<matrix.size(); i++)
    {
        for(auto it=matrix[i].begin(); it!=matrix[i].end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    s.setZeroes(matrix);

    for(int i=0; i<matrix.size(); i++)
    {
        for(auto it=matrix[i].begin(); it!=matrix[i].end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

}