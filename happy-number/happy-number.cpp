#include <bits/stdc++.h>
using namespace std;
#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    bool isHappy(int n) {
        GOAT
        unordered_set<int> s;
        while(n!=1){
            int copy=n,ans=0;
            while(copy>0){
                ans+=(copy%10)*(copy%10);
                copy/=10;
            }
            if(s.count(ans))
                return false;
            s.insert(ans);
            n=ans;
        }
        return true;
    }
};
