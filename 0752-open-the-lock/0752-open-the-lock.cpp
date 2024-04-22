#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        GOAT
        unordered_set <string> vis{deadends.begin() , deadends.end()};
        if(vis.count("0000"))
            return -1;
        if(target=="0000")
            return 0;
        queue<string> q{{"0000"}};
        int ans=0;
        while(!q.empty()){
            ans++;
            for (int i = q.size(); i > 0; --i) {
                string copy = q.front();
                q.pop();
                for (int j = 0; j < 4; ++j) {
                    char cashe=copy[j];
                    copy[j] = (copy[j]=='9'? '0':copy[j]+1);
                    if(copy==target)
                        return ans;
                    if(!vis.count(copy))
                        vis.insert(copy),q.push(copy);
                    copy[j]=cashe;
                    copy[j]= (copy[j]=='0'? '9':copy[j]-1);
                    if(copy==target)
                        return ans;
                    if(!vis.count(copy))
                        vis.insert(copy),q.push(copy);
                    copy[j]=cashe;
                }
            }
        }
        return -1;
    }
};