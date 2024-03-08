#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans=0;
        while(target>1 && maxDoubles){
            if(target&1)
                target--;
            else
                target/=2, maxDoubles--;
            ans++;
        }
        return ans+target-1;
    }
};