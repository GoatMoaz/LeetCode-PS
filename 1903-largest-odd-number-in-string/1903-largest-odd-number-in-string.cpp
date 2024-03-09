#include <bits/stdc++.h>
using namespace std;
#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    string largestOddNumber(string num) {
        GOAT
        string ans="";
        bool flag=false;
        for (int i = num.size()-1; i >= 0 ; --i) {
            if(flag)
                ans+=num[i];
            else if(num[i]-'0' & 1)
                ans+=num[i],flag=true;

        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};