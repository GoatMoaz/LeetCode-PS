class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,bool> mp;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]>0)
                mp[nums[i]]=true;
        }
        int counter=1;
        for(auto i : mp){
            if(!mp[counter])
                return counter;
            counter++;
        }
        return counter;
    }
};