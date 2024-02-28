#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> permutation;
        vector<bool> visited(nums.size() , false);
        backtrack(nums,permutation,visited,result);
        return result;
    }
private:
void backtrack(vector<int>& nums , vector<int>&permutation , vector<bool>& visited , vector<vector<int>>& result){
        if(permutation.size() == nums.size()){
            result.push_back(permutation);
            return;
        }
        for(int i=0 ; i<nums.size() ; i++){
            if(!visited[i]){
                permutation.push_back(nums[i]);
                visited[i]=true;
                backtrack(nums,permutation,visited,result);
                visited[i]=false;
                permutation.pop_back();
            }   
        }
    }
};