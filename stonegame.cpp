//question link
//https://leetcode.com/problems/stone-game/
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>



using namespace std;
bool cmp(int x, int y)
{
    return x > y;
}
bool stoneGame(vector<int> &piles)
{

    int n = piles.size();
    sort(piles.begin(), piles.end(), cmp);

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
            sum1 += piles[i];
        else
        {
            sum2 += piles[i];
        }
    }
    if (sum1 > sum2)
        return true;
    else
    {
        return false;
    }
    return false;

    return true;
}

int main()
{
    vector<int> t = {5, 3, 4, 5};
    cout << stoneGame(t);
    return 0;
}