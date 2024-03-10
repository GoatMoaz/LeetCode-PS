#include <bits/stdc++.h>
using namespace std;
#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        GOAT
        vector<int> freq(1001,0),ans;
        for (int i = 0; i < nums1.size(); ++i) {
            if(!freq[nums1[i]])
                freq[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); ++i) {
            if(freq[nums2[i]])
                ans.push_back(nums2[i]),freq[nums2[i]]=0;
        }
        return ans;
    }
};