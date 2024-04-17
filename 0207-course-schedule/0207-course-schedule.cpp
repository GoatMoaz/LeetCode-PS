class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int count=0;
        unordered_map<int,vector<int>> graph;
        vector<int> dists(numCourses);
        for (auto node: prerequisites) {
            graph[node[1]].push_back(node[0]);
            dists[node[0]]++;
        }
        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if(!dists[i])
                q.push(i);
        }
        while(q.size()){
            int cur=q.front();
            q.pop();
            count++;
            for (auto neighbor: graph[cur]) {
                if(!--dists[neighbor])
                    q.push(neighbor);
            }
        }
        return count==numCourses;
    }
};