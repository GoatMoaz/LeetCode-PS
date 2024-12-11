class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        int ans=1;
        for(int i=0 ; i<nums.size() ; i++){
            v.push_back({nums[i]-k, nums[i]+k});
        }
        sort(v.begin() , v.end());
        for(int i=0 ; i<v.size() ; i++){
            int mx = upper_bound(v.begin() , v.end() , make_pair(v[i].second, (int) 1e9)) - v.begin();
            ans = max(ans, mx-i);
        }
        return ans;
    }
};