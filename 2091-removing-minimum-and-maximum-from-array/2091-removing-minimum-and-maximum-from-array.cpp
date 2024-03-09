#include <bits/stdc++.h>
using namespace std;
#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        GOAT;
        if (nums.size() == 1)
            return 1;
        int min_moves = 1e5, max_moves = -1e5;
        int max_value = -1e5, min_value = 1e5;
        for (int i = 0; i < nums.size(); ++i) {
            if (max_value < nums[i])
                max_value = nums[i], max_moves = i;
            if (min_value > nums[i])
                min_value = nums[i], min_moves = i;
        }
        int left = max(max_moves + 1, min_moves + 1);
        int right = max(nums.size() - max_moves, nums.size() - min_moves);
        int mid = min(max_moves + 1, min_moves + 1) + min(nums.size() - max_moves, nums.size() - min_moves);
        return min({left, right, mid});
    }
};