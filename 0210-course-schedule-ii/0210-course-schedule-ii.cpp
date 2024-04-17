#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        GOAT
        vector<int> ans;
        unordered_map<int,vector<int>> graph;
        vector<int> dists(numCourses);
        queue<int> q;
        for (auto& node: prerequisites) {
            graph[node[1]].push_back(node[0]);
            dists[node[0]]++;
        }
        for (int i = 0; i < numCourses; ++i) {
            if(!dists[i])
                q.push(i);
        }
        while(q.size()){
            int top = q.front();
            q.pop();
            ans.push_back(top);
            for (auto v: graph[top]) {
                if(--dists[v] == 0)
                    q.push(v);
            }
        }
        return ans.size()==numCourses? ans: vector<int>();
    }
};