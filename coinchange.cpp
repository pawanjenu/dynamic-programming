//question link
//https://leetcode.com/problems/coin-change/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
bool cmp(int x,int y){
    return x> y;
}

int coinChange(vector<int>& coins, int amount) {
     if(amount == 0) return 0;
    const int INF = 1e9 + 90;
        vector < int > dp(amount+1,INF);
        dp[0] =0;
        for(int x : coins){
        for(int i = 1 ; i <= amount ; i++){
                if(i>=x)
                    dp[i] = min(dp[i],dp[i-x]+1);

        }
        }
        return (dp[amount]==INF?-1:dp[amount]);
}




    int main(){
        vector<int> coins = {1,2,5};
        cout <<coinChange(coins,11); 
    }