#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<string,int> &a , const pair<string,int> &b){
    if(a.second==b.second)
        return (a.first>b.first);
    return (a.second < b.second);
}
using namespace std;
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        for (int i = 0; i < words.size(); ++i) {
            mp[words[i]]++;
        }
        vector<pair<string,int>> freq;
        for (auto i: mp) {
            freq.push_back({i.first,i.second});
        }
        sort(freq.rbegin(),freq.rend(), sortbysec);
        vector<string> ans;
        int i=0;
        while(k--){
            ans.push_back(freq[i].first);
            i++;
        }
        return ans;
    }
};