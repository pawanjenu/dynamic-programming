//question link
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock
#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h> 

using namespace std;
 int maxProfit(vector<int>& prices) {
     int n = prices.size();
     vector<int> dp(n+1,0);
     int minn = INT_MAX;
     for(int i = 0; i < n; i++){
         minn = min(minn,prices[i]);
         dp[i+1] = max(prices[i]-minn,dp[i]);


     }

     return dp[n];

        
    }

int main(){
    vector<int> t = {7,1,5,3,6,4};
    cout << maxProfit(t);
  


    return 0;
}