#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool sortbysec(const pair<int,int> &a , const pair<int,int> &b){
    if(a.second==b.second)
        return (a.first<b.first);
    return (a.second < b.second);
}
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        GOAT
        vector<int> ans;
        vector<pair<int,int>> v;
        for (int i = 0; i < arr.size(); ++i) {
            v.push_back({arr[i],abs(arr[i]-x)});
        }
        sort(v.begin() , v.end() , sortbysec);
        for (int i = 0; i < k; ++i) {
            ans.push_back(v[i].first);
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};