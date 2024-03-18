class Solution {
public:
    int numSquares(int n) {
        vector<int> ps;
        for (int i = 1; i <= n; ++i) {
            int sq=sqrt(i);
            if(sq*sq==i)
                ps.push_back(i);
        }
        queue<int> q;
        set<int> s{n};
        int ans=0;
        q.push(n);
        while(!q.empty()){
            ans++;
            for (int i = q.size(); i > 0; --i) {
                int copy=q.front();
                if(copy==0)
                    return ans-1;
                q.pop();
                for (int j = 0; j < ps.size(); ++j) {
                    if (ps[j]<=copy){
                        if(!s.count(copy-ps[j]))
                            q.push(copy-ps[j]),s.insert(copy-ps[j]);
                    }
                    else
                        break;
                }
            }
        }
        throw;
    }
};