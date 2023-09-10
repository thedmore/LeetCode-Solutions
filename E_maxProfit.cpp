// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// level - easy
// 121. Best Time to Buy and Sell Stock

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        // DP
        // int n = prices.size();
        // vector<int> maxPrices(n,0);
        // maxPrices[n-1] = prices[n-1];
        // for(int i=n-2; i>=0; i--){
        //     maxPrices[i] = max(maxPrices[i+1], prices[i]);
        // }
        // int maxProfit = 0;
        // for(int i=0; i<n; i++){
        //     maxProfit = max(maxProfit, maxPrices[i]-prices[i]);
        // }
        // return maxProfit;

        int buyPrice = INT_MAX;
        vector<int> profit;
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < buyPrice)
                buyPrice = prices[i];
            int p = prices[i] - buyPrice;
            profit.push_back(p);
        }
        return *max_element(profit.begin(), profit.end());
    }
};