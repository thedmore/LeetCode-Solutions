class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size(), maxi = 0;
//         string str = "";
//         unordered_set<char> SET;

//         for(int i=0; i<n; i++){
//             for(int j=i; j<n; j++){
//                 str += s[j];
//                 SET.insert(s[j]);
//                 if(str.size() == SET.size())
//                     maxi = max(maxi, (int)str.size());
//             }
//             str = "";
//             // SET.clear();
//         }

//         return maxi;
//     }
// };