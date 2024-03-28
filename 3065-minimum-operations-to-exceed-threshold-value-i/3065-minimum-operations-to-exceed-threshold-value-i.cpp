#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        GOAT
        int ans=0;
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]<k)
                ans++;
            else
                break;
        }
        return ans;
    }
};