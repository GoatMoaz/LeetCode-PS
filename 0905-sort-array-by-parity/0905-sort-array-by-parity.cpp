#include <bits/stdc++.h>
using namespace std;
#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        GOAT
        deque<int> dq;
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i) {
            if(nums[i]&1)
                dq.push_back(nums[i]);
            else
                dq.push_front(nums[i]);
        }
        for (int i = 0; i < dq.size(); ++i) {
            ans.push_back(dq[i]);
        }
        return ans;
    }
};