// https://leetcode.com/problems/next-permutation/description/
// level - medium

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void nextPermutation(vector<int>& nums){
            // next_permutation(nums.begin(), nums.end());
            // or
            
            int n = nums.size();
            int i=n-2;
            while(i>=0 && nums[i]>=nums[i+1]){
                i--;
            }
            if(i>=0){
                int j=n-1;
                while(j>=0 && nums[i]>=nums[j]){
                    j--;
                }
                swap(nums[i], nums[j]);
            }    
            reverse(nums.begin()+i+1, nums.end());
        }
};

int main(){
    Solution s;
    srand(time(0));
    int n = 1 + (rand()%(101-1+1));
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        nums[i] = rand()%10;

    cout<<"Number: ";
    for(int i=0; i<n; i++)
        cout<<nums[i];

    s.nextPermutation(nums);
    
    cout<<endl<<"Next permutation: ";    
    for(int i=0; i<n; i++)
        cout<<nums[i];   
}