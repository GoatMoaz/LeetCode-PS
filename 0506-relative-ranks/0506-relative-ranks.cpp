#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        GOAT
        vector<string> ans(score.size());
        vector<pair<int, int>> v;
        for (int i = 0; i < score.size(); ++i) {
            v.push_back({score[i], i});
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < v.size(); ++i) {
            if (i == 0)
                ans[v[i].second] = "Gold Medal";
            else if (i == 1)
                ans[v[i].second] = "Silver Medal";
            else if (i == 2)
                ans[v[i].second] = "Bronze Medal";
            else
                ans[v[i].second] = to_string(i+1);
        }
        return ans;
    }
};