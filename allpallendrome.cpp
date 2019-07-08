//question link
//https://leetcode.com/problems/palindromic-substrings
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;

vector<vector<int>> dp,vis;
int comp(int i, int j,string &s){

    if(i > j)
        return 1;
    if(i == j)
        return 1;
    int &ans = dp[i][j];
    if(vis[i][j])
        return ans;

    if(s[i] != s[j])
        return 0;

    return ans = comp(i+1,j-1,s);
}

int countSubstrings(string s) {
        int n = s.size();
        int ans = 0;
        dp.resize(n, vector<int>(n, -1));
        vis.resize(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++)
            for(int j = i; j < n; j++)
                ans+=comp(i,j,s);

    }

/*logic 2
int countSubstrings(string s) {
        int ans = 0;
        for(int i = 0; i < s.length(); i++) {
            extendSubstring(s,i,i,ans);    // all the center position that odd substring can started 
            extendSubstring(s,i,i+1,ans);  // all teh center position that even substring can started
        }
        return ans;
    }
    
    void extendSubstring(string &s, int start, int end, int & ans) {
        while(start >= 0 && end < s.length() && s[start] == s[end]) {   // extend the substring when s[start] == s[end] 
            start--;
            end++;
            ans++;
        }
    } */