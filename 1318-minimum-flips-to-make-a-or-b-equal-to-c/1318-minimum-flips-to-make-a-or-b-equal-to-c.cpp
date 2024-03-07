#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFlips(int a, int b, int c) {
        bitset<32> bitA(a),bitB(b),bitC(c);
        int ans = 0;
        for (int i = 0; i < bitA.size(); ++i) {
            if ((bitA[i] | bitB[i]) != bitC[i]) {
                if (((!bitA[i] | bitB[i]) == bitC[i]) || ((bitA[i] | !bitB[i]) == bitC[i]))
                    ans++;
                else
                    ans += 2;
            }
        }
        return ans;
    }
};