class Solution {
public:
    long long findScore(vector<int>& nums) {
        set<pair<int,int>> s;
        vector<bool> seen(nums.size());
        long long ans=0;
        for(int i=0 ; i<nums.size() ; i++){
            s.insert({nums[i] , i});
        }
        
        for(auto [num,i] : s){
            if(seen[i])
                continue;
            if(i>0)
                seen[i-1]=true;
            if(i<nums.size())
                seen[i+1]=true;
            seen[i]=true;
            ans+=num;
        }
        return ans;
    }
};