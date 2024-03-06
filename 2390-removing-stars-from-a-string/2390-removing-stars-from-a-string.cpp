#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeStars(string s) {
        stack<int>st;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]!='*')
                st.push(s[i]);
            else
                st.pop();
        }
        if(st.empty())
            return "";
        s="";
        while(!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin() , s.end());
        return s;
    }
};