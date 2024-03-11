#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            int range = k;
            while (range > 0 and j < nums.size()) {
                if (nums[i] == nums[j])
                    return true;
                j++;
                range--;
            }
        }
        return false;
    }
};