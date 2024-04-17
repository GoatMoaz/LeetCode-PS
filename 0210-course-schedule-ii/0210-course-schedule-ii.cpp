class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        vector<vector<int>> graph(numCourses);
        vector<int> dists(numCourses);
        queue<int> q;
        for (auto node: prerequisites) {
            int src = node[1];
            int dist = node[0];
            graph[src].push_back(dist);
            dists[dist]++;
        }
        for (int i = 0; i < numCourses; ++i) {
            if(!dists[i])
                q.push(i);
        }
        while(!q.empty()){
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