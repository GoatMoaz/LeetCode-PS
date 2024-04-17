class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        unordered_map<int, vector<int>> graph;
        set<int> visited;
        for (auto &node: edges) {
            graph[node[0]].push_back(node[1]);
            graph[node[1]].push_back(node[0]);         
        }
        stack<int> st{{source}};
        while (st.size()) {
            int curr = st.top();
            st.pop();
            if (curr == destination)
                return true;
            if (!visited.count(curr)) {
                visited.insert(curr);
                for (auto &neighbor: graph[curr]) {
                    st.push(neighbor);
                }
            }
        }
        return false;
    }
};