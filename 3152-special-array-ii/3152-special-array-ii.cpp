class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> ans;
        vector<int>pref={0};
        int counter = 0;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i]%2 == nums[i-1]%2)
                counter++;
            pref.push_back(counter);
        }
        
        for(int i=0 ; i<queries.size() ; i++){
            int start=queries[i][0], end=queries[i][1];
            ans.push_back(pref[start]==pref[end]);
        }
        
        return ans;
    }
};