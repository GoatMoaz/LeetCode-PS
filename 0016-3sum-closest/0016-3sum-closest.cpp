#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        GOAT
        int ans,mn=1e9;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                for (int k = j+1; k < nums.size(); ++k) {
                    int x=nums[i]+nums[j]+nums[k];
                    if(abs(target-mn)>abs(target-x))
                        mn=x;
                }
            }
        }
        return mn;
    }
};