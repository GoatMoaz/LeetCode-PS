#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> copy(nums.size());
        int back=nums.size()-1,front=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==0)
                copy[back]=0,back--;
            else
                copy[front]=nums[i],front++;            
        }
        for(int i=0 ; i<nums.size() ; i++){
           nums[i]=copy[i];     
        }
        
    }
};