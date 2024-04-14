#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        GOAT
        priority_queue<int> pq;
        for (int i = 0; i < stones.size(); ++i) {
            pq.push(stones[i]);
        }
        while (!pq.empty()) {
            int f = pq.top();
            pq.pop();
            if (!pq.empty()) {
                int s = pq.top();
                pq.pop();
                if (abs(s - f) != 0)
                    pq.push(abs(s - f));
            } else
                return pq.top();
        }
        return 0;
    }
};