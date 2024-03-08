#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0;
        for (int i = 0; i < t.size(); ++i) {
            if(t[i]==s[count])
                count++;
            if(count==s.size()) break;
        }
        return count==s.size();
    }
};