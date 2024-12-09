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
        
        for(auto q : queries){
            int start=q[0], end=q[1];
            ans.push_back(pref[start]==pref[end]);
        }
        
        return ans;
    }
};