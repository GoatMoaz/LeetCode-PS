#include <bits/stdc++.h>
using namespace std;
#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    string largestGoodInteger(string num) {
        GOAT
        int count=0;
        char good=47;
        for (int i = 1; i < num.size(); ++i) {
            if(num[i]==num[i-1])
                count++;
            else
                count=0;
            if(count==2)
                good=max(good,num[i]);
        }
        string ans="";
        if(good<'0')
            return "";
        ans+=good;
        ans+=good;
        ans+=good;
        return ans;

    }
};