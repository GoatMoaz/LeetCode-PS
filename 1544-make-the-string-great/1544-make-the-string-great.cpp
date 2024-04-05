#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    string makeGood(string s) {
        GOAT
        string ans="";
        ans.push_back(s[0]);
        for (int i = 1; i < s.size(); ++i) {
           if (!ans.empty() && (ans.back()==s[i]-32 || ans.back()==s[i]+32))
                ans.pop_back();
           else
               ans.push_back(s[i]);
        }
        return ans;
    }
};