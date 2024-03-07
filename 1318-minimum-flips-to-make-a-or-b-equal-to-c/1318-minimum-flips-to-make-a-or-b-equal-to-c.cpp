#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        for (int i = 0; i < 32; ++i) {
            bool ai = (a& (1<<i));
            bool bi = (b& (1<<i));
            bool ci = (c& (1<<i));
            if(!ci){
                if(ai && bi)
                    ans+=2;
                else if (ai || bi)
                    ans++;
            }
            else{
                if(!ai && !bi)
                    ans++;
            }
        }
        return ans;
    }
};