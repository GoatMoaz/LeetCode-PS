class Solution {
private:
    void dfs(vector<vector<int>> &graph, int source, vector<int> &&path, vector<vector<int>> &ans) {
        if (source == graph.size() - 1) {
            ans.push_back(path);
            return;
        }
        for (auto node: graph[source]) {
            path.push_back(node);
            dfs(graph, node, move(path), ans);
            path.pop_back();
        }
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<vector<int>> ans;
        dfs(graph, 0, {0}, ans);
        return ans;
    }
};