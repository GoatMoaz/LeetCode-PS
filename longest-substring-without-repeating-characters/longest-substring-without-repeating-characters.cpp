class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        for (int i = 0; i < s.size(); ++i) {
            set<char> se;
            for (int j = i; j < s.size(); ++j) {
                if(se.count(s[j])>0)
                    break;
                else
                    se.insert(s[j]);
            }
            ans= max(ans,(int)se.size());
        }
        return ans;
    }
};