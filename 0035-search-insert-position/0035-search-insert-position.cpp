#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
private:
    int bs(vector<int>&nums , int target){
        int l=0,r=nums.size();
        while(l<r){
            int m=(l+r)/2;
            if(nums[m]==target)
                return m;
            else if(nums[m]>target)
                r=m;
            else
                l=m+1;
        }
        return l;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        GOAT
        if(target > nums[nums.size()-1])
            return nums.size();
        if(target < nums[0])
            return 0;
        return bs(nums,target);
    }
};