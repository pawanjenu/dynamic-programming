#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std;
//question link
//https://leetcode.com/problems/house-robber/



  int rob(vector<int>& nums) {
      int n = nums.size();
      vector<int> dp(n+2,0);
      long currmax,prevmax =0,prevprevmax =0;

        for(int i = 0; i < n; i++){
            currmax = prevmax;
            currmax = max(currmax,nums[i]+prevprevmax);
            prevprevmax = prevmax;
            prevmax = currmax;
        }

        return currmax;
    }
    

int main(){
    vector<int> t = {1,2,3,1};
    cout <<rob(t);


    return 0;
}