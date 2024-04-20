class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        stack<int> st;
        vector<int> ans(nums.size(), -1);
        for (int i = 0; i < 2 * nums.size(); ++i) {
            while (!st.empty() && nums[st.top()] < nums[i % nums.size()]) {
                ans[st.top()] = nums[i % nums.size()];
                st.pop();
            }
            st.push(i % nums.size());
        }
        return ans;
    }
};