// https://leetcode.com/problems/search-insert-position/description/
// level - easy
// Search Insert Position

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid, left=0, right=nums.size()-1;
        while(left <= right){
            mid = (left + right) / 2;
            if(target == nums[mid])
                return mid;
            else if(target < nums[mid])
                right = mid - 1;
            else    
                left = mid + 1;
        }
        return left;
    }
};

int main(){
    Solution s;
    int n = 10;
    vector<int> vec(n);
    for(int i=0; i<n; i++)
        vec[i] = i * 2;
    cout<<"index : "<<s.searchInsert(vec,9);
}