//question link
//https://leetcode.com/problems/group-anagrams/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;



vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        int x = 0;
        unordered_map<string,vector<int>> mp;
        vector<string> yo = strs;
        vector<vector<string>> ans;
        
        for(int i = 0; i < n; i++){
            sort(yo[i].begin(),yo[i].end());
            mp[yo[i]].push_back(i);
        }

        for(auto it  = mp.begin(); it != mp.end(); it++){
            vector<string> temp;
            for(auto it2 = it->second.begin();it2 != it->second.end(); it2++){
                temp.push_back(strs[*it2]);
            }
            ans.push_back(temp);
        }

        return ans;

    }

int main(){

    vector<string> yo = {"eat", "tea", "tan", "ate", "nat", "bat"};

    for(auto it:groupAnagrams(yo)){
        for(auto it2:it){
            cout << it2 <<" ";
        }
        cout << endl;
    }
    
}