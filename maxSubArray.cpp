//question link
//https://leetcode.com/problems/maximum-subarray/
#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h> 

using namespace std;
 int maxSubArray(vector<int>& nums) {
     int n = nums.size();
     vector<long long> dp(n+1,0);
     long long ans = 0,prevmax = INT_MIN,currmax;

     for(int i = 0; i < n; i++){
        currmax = nums[i];
        currmax = max(currmax,nums[i] + prevmax);
        ans = max(currmax,ans);
        prevmax = currmax;

     }

     return ans;

        
    }

int main(){
    vector<int> t = {-2,1,-3,4,-1,2,1,-5,4};
    cout <<maxSubArray(t);


    return 0;
}