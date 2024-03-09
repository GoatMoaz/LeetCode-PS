#include <bits/stdc++.h>
using namespace std;
#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    string defangIPaddr(string address) {
        GOAT
        string ans;
        for (int i = 0; i < address.size(); ++i) {
            if(address[i]!='.')
                ans.push_back(address[i]);
            else
                ans.push_back('['),ans.push_back('.'),ans.push_back(']');
        }
        return ans;
    }
};