#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        GOAT
        unordered_map<string,vector<string>>mp;
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); ++i) {
            string copy=strs[i];
            sort(copy.begin() , copy.end());
            mp[copy].push_back(strs[i]);
        }
        for (auto i: mp) {
            vector<string> co;
            for (int k = 0; k < i.second.size(); ++k) {
                co.push_back(i.second[k]);
            }
            ans.push_back(co);
        }
        return ans;
    }
};
