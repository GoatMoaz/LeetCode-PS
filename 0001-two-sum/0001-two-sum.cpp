#include <bits/stdc++.h>
#define all(v)      (v).begin(), (v).end()

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<pair<int, int>> v(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            v[i] = {i, nums[i]};
        }

        sort(all(v), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second < b.second;
        });
        
        int l = 0, r = nums.size() - 1;
        while (l != r) {
            if (v[l].second + v[r].second == target) return {v[l].first, v[r].first};

            if (v[l].second + v[r].second > target)
                --r;
            else
                ++l;
        }
        return {-1};
    }
};
