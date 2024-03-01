#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2);
        map<int,int> mp;
        for(int i=1 ; i<=grid.size()*grid.size() ; i++){
            mp[i]++;
        }
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid.size() ; j++){
                mp[grid[i][j]]++;
            }
        }
        for(auto i : mp){
            if(i.second==1)
                ans[1]=i.first;
            else if(i.second==3)
                ans[0]=i.first;
        }
        return ans;
    }
};