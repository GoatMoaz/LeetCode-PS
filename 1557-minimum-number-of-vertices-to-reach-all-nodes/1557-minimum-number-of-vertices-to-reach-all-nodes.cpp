class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<int> dists(n),ans;
        for (auto& node: edges) {
            dists[node[1]]++;
        }
        for (int i = 0; i < n; ++i) {
            if(!dists[i])
                ans.push_back(i);
        }
        return ans;
    }
};