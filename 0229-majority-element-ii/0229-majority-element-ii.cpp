#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        GOAT
        vector<int> ans;
        unordered_map<int,int>mp;
        for(int i=0 ; i<nums.size() ; i++){
           mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second > nums.size()/3)
                ans.push_back(i.first);
        }
        return ans;
    }
};