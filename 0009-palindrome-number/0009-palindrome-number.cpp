#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string copy=s;
        reverse(copy.begin() , copy.end());
        if(copy==s)
            return true;
        return false;
    }
};
