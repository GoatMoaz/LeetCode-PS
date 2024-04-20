class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<int> ans(nums1.size(),-1);
        unordered_map<int,int> mp;
        stack<int> st;
        for (int i = 0; i < nums2.size(); ++i) {
            while (!st.empty() && nums2[st.top()]<nums2[i]){
                mp[nums2[st.top()]]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            mp[nums2[st.top()]]=-1;
            st.pop();
        }
        for (int i = 0; i < nums1.size(); ++i) {
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
};