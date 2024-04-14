#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        GOAT
        priority_queue<int , vector<int> , greater<>> pq;
        for (int i = 0; i < nums.size(); ++i) {
            pq.push(nums[i]);
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
    }
};