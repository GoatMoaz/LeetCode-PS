#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        GOAT
        stack<int> st{{0}};
        vector<int> ans(prices.size());
        for (int i = 1; i < prices.size(); ++i){
            while(!st.empty() && prices[st.top()]>=prices[i]) {
                ans[st.top()] = prices[st.top()] - prices[i];
                st.pop();
            }
            st.push(i);
        }
        while (!st.empty()){
            ans[st.top()]=prices[st.top()];
            st.pop();
        }
        return ans;
    }
};