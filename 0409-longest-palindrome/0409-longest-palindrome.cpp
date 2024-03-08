#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        map<int, int> mp;
        for (int i = 0; i < s.size(); ++i) {
            mp[s[i]]++;
        }
        int ans = 0;
        bool flag = true;
        for (auto i: mp) {
            if (i.second % 2 == 0)
                ans += i.second;
            else if (i.second > 1) {
                if (flag)
                    ans += i.second, flag = false;
                else
                    ans += i.second - 1;
            } else {
                if (flag)
                    ans++, flag = false;
            }
        }
        return ans;
    }
};