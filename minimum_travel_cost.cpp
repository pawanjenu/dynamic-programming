//question link
//https://leetcode.com/problems/minimum-cost-for-tickets
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;

 int mincostTickets(vector<int>& days, vector<int>& costs) {
     int n = days.size();
     n = days[n-1];

     vector<int> dp(n+1,0);

        int one,week,mon,maxx;
        for(auto day: days)
            dp[day] = costs[0];

    for(int i = 1; i <=n; i++){
        if(!dp[i]){
            dp[i] = dp[i-1];
           
        }
      else{
        one = dp[i-1]+costs[0];
        maxx = max(i-7,0);
        week = dp[maxx]+costs[1];
        maxx = max(i-30,0);
        mon = dp[maxx]+costs[2];
        dp[i] = min(one,min(week,mon));
      }

    }

return dp[n];

 }

  int main(){
        vector<int> days = {1,4,6,7,8,20};
        vector<int> charge = {2,7,15};
        cout <<mincostTickets(days,charge);
    }