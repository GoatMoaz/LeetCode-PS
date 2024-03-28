#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        GOAT
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