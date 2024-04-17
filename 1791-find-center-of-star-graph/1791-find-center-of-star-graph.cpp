class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        unordered_map<int,int> mp;
        for(auto& node : edges){
            mp[node[0]]++;
            mp[node[1]]++;
        }
        for(auto i : mp){
            if(i.second==edges.size())
                return i.first;
        }
        return 0;
    }
};