bool sortbysec(const pair<string,int> &a , const pair<string,int> &b){
    if(a.second==b.second)
        return (a.first>b.first);
    return (a.second < b.second);
}
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<pair<string,int>> v;
        for (int i = 0; i < list1.size(); ++i) {
            for (int j = 0; j < list2.size(); ++j) {
                if(list1[i]==list2[j]) {
                    v.push_back({list1[i],i+j});
                }
            }
        }
        sort(v.begin(),v.end(), sortbysec);
        vector<string> ans;
        ans.push_back(v[0].first);
        for (int i = 1; i < v.size(); ++i) {
            if(v[i].second==v[i-1].second)
                ans.push_back(v[i].first);
            else
                break;
        }
        return ans;
    }
};
