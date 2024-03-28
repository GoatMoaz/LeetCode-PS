#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        GOAT
        if(nums.size()==1)
            return 1;
        unordered_map<int,int> mp;
        int ans=0;
        int l , r;
        for (l = 0, r=0; r < nums.size(); ++r) {
            mp[nums[r]]++;
            if(mp[nums[r]]>k){
                ans=max(ans,r-l);
                while(nums[r]!=nums[l])
                    mp[nums[l++]]--;
                if(nums[r]==nums[l]) {
                    mp[nums[r]]--, l++;
                    continue;
                }
            }
        }
        ans=max(ans,r-l);
        return ans;
    }
};