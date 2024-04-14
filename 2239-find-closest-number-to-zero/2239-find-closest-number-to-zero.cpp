#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        GOAT
        int mn=1e7,v=0;
        for (int i = 0; i < nums.size(); ++i) {
            if(mn>abs(nums[i]) || (abs(nums[i])==mn && nums[i]>v)) {
                v = nums[i];
                mn=abs(nums[i]);
            }
        }
        return v;
    }
};