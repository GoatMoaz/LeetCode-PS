class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue<int> pq;
        for(auto gift : gifts){
            pq.push(gift);
        }
        while(k--){
            int mx = pq.top();
            pq.pop();
            pq.push(sqrt(mx));
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};