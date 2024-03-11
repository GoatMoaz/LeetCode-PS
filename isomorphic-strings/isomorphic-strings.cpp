class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, char> mp;
        unordered_set<char> se;
        for (int i = 0; i < s.size(); ++i) {
            if (mp.find(s[i]) != mp.end()) {
                if (mp[s[i]] != t[i])
                    return false;
            } else {
                if (se.find(t[i]) != se.end())
                    return false;
                mp[s[i]] = t[i];
                se.insert(t[i]);
            }
        }
        return true;
    }
};