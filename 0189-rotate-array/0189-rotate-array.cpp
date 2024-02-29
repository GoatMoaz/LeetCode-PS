#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int rotate_operation=k%nums.size();
        reverse(nums.begin() , nums.end());
        reverse(nums.begin()+rotate_operation , nums.end());
        reverse(nums.begin() , nums.begin()+rotate_operation);
        
    }
};