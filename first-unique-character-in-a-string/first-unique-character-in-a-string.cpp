#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int firstUniqChar(string s) {
        GOAT
        int mp[26]{0};
        for (int i = 0; i < s.size(); ++i) {
            mp[s[i]-'a']++;
        }
        for (int i = 0; i < s.size(); ++i) {
            if(mp[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
