#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        GOAT
        stack<int> st{{0}};
        for (int i = 1; i < prices.size(); ++i){
            while(!st.empty() && prices[st.top()]>=prices[i]) {
                prices[st.top()] -= prices[i];
                st.pop();
            }
            st.push(i);
        }
        return prices;
    }
};