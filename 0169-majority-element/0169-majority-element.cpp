class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int ans=1;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i]==nums[i-1]){
                ans++;
                if(ans>nums.size()/2)
                    return nums[i];
            }
            else
                ans=1;
        }
        return nums[nums.size()-1];
    }
};