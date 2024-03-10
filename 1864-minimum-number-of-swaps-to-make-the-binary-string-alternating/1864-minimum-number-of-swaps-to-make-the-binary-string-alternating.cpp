#include <bits/stdc++.h>
using namespace std;
#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int minSwaps(string s) {
        GOAT
        int zero=0,one=0;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='1')
                one++;
            else
                zero++;
        }
        if(abs(zero-one)>1)
            return -1;
        int mn0=0,mn1=0,mne1=0,mne2=0;
        for (int i = 0; i < s.size(); ++i) {
           if(zero>one){
               if((s[i]=='1' && i%2==0) || (s[i]=='0' && i&1))
                   mn0++;
           } else if (one>zero){
               if((s[i]=='0' && i%2==0) || (s[i]=='1' && i&1))
                   mn1++;
           } else{
               if((s[i]=='1' && i%2==0) || (s[i]=='0' && i&1))
                   mne1++;
               else
                   mne2++;
           }
        }
        if(zero>one)
            return mn0/2;
        else if (one>zero)
            return mn1/2;
        return min(mne1/2 , mne2/2);
    }
};