#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour%=12;
        hour=(hour*60)+minutes;
        double hour_degree=(double)hour/2;
        double min_degree=minutes*6;
        double ans=abs(min_degree-hour_degree);
        if(ans>180)
            return 360-ans;
        return ans;
        
    }
};