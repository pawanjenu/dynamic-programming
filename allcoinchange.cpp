//question link
//https://leetcode.com/problems/coin-change/ (similar problem but in this one we find out all the combination possible)
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool cmp(int x, int y)
{
    return x > y;
}

int coinChange(vector<int> &coins, int amount)
{
    if (amount == 0)
        return 0;
    const int INF = 1e9 + 90;
    vector<int> dp(amount + 1, 0);
    dp[0] = 1;
    for (int x : coins)
    {
        for (int i = 1; i <= amount; i++)
        {
            if (i >= x)
                dp[i] += dp[i - x];
        }
    }
    return (dp[amount] == 0 ? -1 : dp[amount]);
}

int main()
{
    vector<int> coins = {1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << coinChange(coins, 120);
}