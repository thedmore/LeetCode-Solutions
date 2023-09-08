// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/
// level - easy
// 2114. Maximum Number of Words Found in Sentences

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = -1;
        for(int i=0; i<sentences.size(); i++){
            int count = 1;
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' ')
                    count++;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};

// class Solution {
// public:
//     int mostWordsFound(vector<string>& sentences) {
//         int maxi = -1;
//         vector<int> vec;
//         for(int i=0; i<sentences.size(); i++){
//             int count = 1;
//             for(int j=0; j<sentences[i].size(); j++){
//                 if(sentences[i][j] == ' ')
//                     count++;
//             }
//             vec.push_back(count);
//         }
//         int ans = *max_element(vec.begin(), vec.end());
//         return ans;
//     }
// };