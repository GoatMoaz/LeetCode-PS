#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2);
        vector<int> freq(grid.size()*grid.size()+1 , 0);
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid.size() ; j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i=1; i<freq.size() ; i++){
            if(freq[i]==0)
                ans[1]=i;
            else if(freq[i]==2)
                ans[0]=i;
        }
        return ans;
    }
};