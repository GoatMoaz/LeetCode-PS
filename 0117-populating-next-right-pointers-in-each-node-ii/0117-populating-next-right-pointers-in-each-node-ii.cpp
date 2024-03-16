/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr ||(!root->left && !root->right))
            return root;
        queue<Node*> q;
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
        while(!q.empty()){
            for (int i = q.size(); i > 0; --i) {
                Node *copy = q.front();
                q.pop();
                if(i!=1) {
                    copy->next=q.front();
                }
                if(copy->left)
                    q.push(copy->left);
                if(copy->right)
                    q.push(copy->right);
            }
        }
        return root;
    }
};