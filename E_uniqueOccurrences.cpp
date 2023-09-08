// https://leetcode.com/problems/unique-number-of-occurrences/description/
// level - easy
// 1207. Unique Number of Occurrences

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<int> vec;
        int count = 1;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] == arr[i + 1])
                count++;
            else
            {
                vec.push_back(count);
                count = 1;
            }
        }
        vec.push_back(count);
        sort(vec.begin(), vec.end());

        for (int i = 0; i < vec.size() - 1; i++)
        {
            if (vec[i] == vec[i + 1])
                return false;
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 2};
    cout << s.uniqueOccurrences(v);
}