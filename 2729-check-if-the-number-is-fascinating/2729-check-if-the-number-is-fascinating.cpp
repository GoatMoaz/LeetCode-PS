#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isFascinating(int n) {
        int copy1 = 2 * n, copy2 = 3 * n;
        string x = to_string(n) + to_string(copy1) + to_string(copy2);
        vector<int> freq(10, 0);
        for (int i = 0; i < x.size(); ++i) {
            freq[x[i]-'0']++;
        }
        for (int i = 1; i < freq.size(); ++i) {
            if (freq[i] == 0 || freq[i] > 1)
                return false;
        }
        return true;
    }
};