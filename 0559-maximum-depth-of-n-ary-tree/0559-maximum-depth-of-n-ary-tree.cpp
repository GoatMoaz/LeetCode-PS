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
    int maxDepth(Node* root) {
        GOAT
        if(!root)
            return 0;
        int mx=0;
        for(int i=0 ; i<root->children.size() ; i++){
            mx=max(mx,maxDepth(root->children[i]));
        }
        return mx+1;
    }
};