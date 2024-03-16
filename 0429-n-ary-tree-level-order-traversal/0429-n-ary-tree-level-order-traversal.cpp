/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        GOAT
        vector<vector<int>> ans;
        if(!root)
            return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            for (int i = q.size(); i > 0; --i) {
                Node* copy=q.front();
                q.pop();
                level.push_back(copy->val);
                for (int j = 0; j < copy->children.size(); ++j) {
                    if(copy->children[j])
                        q.push(copy->children[j]);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};