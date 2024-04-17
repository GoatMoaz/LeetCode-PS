
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<int> count(n+1);
        for(auto& i : trust){
            count[i[0]]--;
            count[i[1]]++;
        }
        
        for(int i=1 ; i<n+1 ; i++){
            if(count[i]==n-1)
                return i;
        }
        return -1;
    }
    
};