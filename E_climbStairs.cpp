// https://leetcode.com/problems/climbing-stairs/description/
// level - easy
// 70. Climbing Stairs

// Applied DP 
class Solution {
public:
    int climbStairs(int n) {
        // if(n==1 || n==0)
        //     return 1;
        // else
        //     return climbStairs(n-1) + climbStairs(n-2);
        //     return climbStairs(n-1) + climbStairs(n-2);
        
        if(n <= 2)
            return n;
        int F[n+1];
        F[0] = F[1] = 1;
        F[2] = 2;
        for(int i=3; i<=n; i++){
            F[i] = F[i-1] + F[i-2];
        }
        return F[n];      
    }
};