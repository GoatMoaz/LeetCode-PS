#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if (nums.size() == 1)
            return 1;
        int min_moves_left = 1e5, max_moves_left = -1e5, min_moves_right = 1e5, max_moves_right = -1e5;
        int max_value = -1e5, min_value = 1e5;
        for (int i = 0; i < nums.size(); ++i) {
            max_value = max(max_value, nums[i]);
            min_value = min(min_value, nums[i]);
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == min_value)
                min_moves_left = i + 1;
            else if (nums[i] == max_value)
                max_moves_left = i + 1;
        }
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (nums[i] == min_value)
                min_moves_right = nums.size() - i;
            else if (nums[i] == max_value)
                max_moves_right = nums.size() - i;
        }
        return min(
                {max(min_moves_right,max_moves_right),
                 max_moves_left + min_moves_right,
                 max_moves_right + min_moves_left,
                 max(min_moves_left,max_moves_left)});
    }
};