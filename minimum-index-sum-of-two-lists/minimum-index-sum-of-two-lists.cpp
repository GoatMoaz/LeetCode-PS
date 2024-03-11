class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;
        vector<string> ans;
        int mn = 1e5;
        for (int i = 0; i < list1.size(); ++i)
            mp[list1[i]] = i;
        for (int i = 0; i < list2.size(); ++i) {
            if (mp.count(list2[i]) > 0) {
                if (i + mp[list2[i]] <= mn) {
                    if (i + mp[list2[i]] < mn)
                        ans.clear(), mn = i + mp[list2[i]];
                    ans.push_back(list2[i]);
                }
            }
        }
        return ans;
    }
};