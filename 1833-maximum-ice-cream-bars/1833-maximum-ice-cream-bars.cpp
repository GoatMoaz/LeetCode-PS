class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin() , costs.end());
        int ans=0;
        for(int i=0 ; i<costs.size() ; i++){
            ans++;
            coins-=costs[i];
            if(coins<=0)
                break;
        }
        if(coins<0)
            ans--;
        return ans;
    }
};