#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDeletion(vector<int>& nums) {
        stack<int> st;
        int count=0,ans=0;
        for (int i = 0; i < nums.size(); ++i) {
            if(st.empty() || st.top()!=nums[i])
                st.push(nums[i]),count++;
            else{
                if(count-1 & 1)
                    st.push(nums[i]),count++;
                else
                    ans++;
            }
        }
        if(st.size()&1)
            ans++;
        return ans;
    }
};