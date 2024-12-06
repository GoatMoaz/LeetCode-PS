class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> s;
        int ans=0;
        for(int i=0 ; i<banned.size() ; i++){
            s.insert(banned[i]);
        }
        for(int i=1 ; i<=n ; i++){
            if(!s.count(i) && i <= maxSum)
                ans++, maxSum-=i;
            if(i>maxSum)
                break;
        }
        return ans;
    }
};