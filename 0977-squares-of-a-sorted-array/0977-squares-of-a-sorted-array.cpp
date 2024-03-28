#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        GOAT
        int l=0,r=nums.size()-1,indx=r;
        vector<int> ans(nums.size());
        while(l<=r){
            if(abs(nums[l])>nums[r]) {
                ans[indx--] = nums[l] * nums[l];
                l++;
            }
            else{
                ans[indx--] = nums[r] * nums[r];
                r--;
            }
        }
        return ans;
    }
};