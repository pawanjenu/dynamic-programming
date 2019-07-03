
//question link
//https://leetcode.com/problems/minimum-falling-path-sum/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minFallingPathSum(vector<vector<int>> &A)
{
    int n = A.size(),ans = INT_MAX;
    for(int i = 1; i < n; i++)
        for(int j = 0; j < n; j++){
            if (j == 0)
                A[i][j] += min(A[i - 1][j], A[i - 1][j + 1]);
            else if (j == A.size() - 1)
                A[i][j] += min(A[i - 1][j], A[i - 1][j - 1]);
            else
                A[i][j] += min(min(A[i - 1][j], A[i - 1][j - 1]), A[i - 1][j + 1]);
        }

        for(int i = 0; i < n; i++)
            ans = min(A[n-1][i],ans);
        return ans;
   
}

int main()
{
    vector<vector<int> > A = {{-51,-35,74},{-62,14,-53},{94,61,-10}};
    cout << minFallingPathSum(A);
}