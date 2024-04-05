#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    string makeGood(string s) {
        GOAT
        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.size(); ++i) {
           if (!st.empty() && (st.top()==s[i]-32 || st.top()==s[i]+32))
                st.pop();
           else
                st.push(s[i]);
        }
        if (st.empty())
            return "";
        string ans="";
        while(!st.empty())
            ans.push_back(st.top()),st.pop();
        reverse(ans.begin() , ans.end());
        return ans;
    }
};