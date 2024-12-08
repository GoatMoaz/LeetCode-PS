class Solution {
public:
   int maxTwoEvents(vector<vector<int>>& events) {
        vector<pair<pair<int,int>,int>> v;
        for (auto &i : events)
            v.push_back({{i[0],i[1]},i[2]});
        sort(v.begin(),v.end());
        vector<int> suffix_mx(v.size() + 1);
        suffix_mx[v.size() - 1] = v.back().second;
        for (int i = v.size() - 2; i >= 0;i--)
            suffix_mx[i] = max(v[i].second,suffix_mx[i+1]); 
        int ans = 0;
        for (int i = 0; i < v.size();i++){
            auto it = lower_bound(v.begin(), v.end(), make_pair(make_pair(v[i].first.second+1, 0), 0)) - v.begin();
            int cur = v[i].second;
            if (it < v.size() && it != i) {
                cur += suffix_mx[it];
            }
            ans = max(ans,cur);
        }
        return ans;
       
    }
};