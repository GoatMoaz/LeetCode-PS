#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        else{
            if((n&(n-1))==0 && (n-1)%3==0)
                return true;
            else
                return false;
        }
    }
};