class Solution {
public:
    int tribonacci(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> tri{0, 1, 1};
        for (int i = 3; i <= n; ++i) {
            tri[i % 3] = tri[0] + tri[1] + tri[2];
        }
        return tri[n % 3];
    }
};