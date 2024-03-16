/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        int check=root->val;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* copy=q.front();
            q.pop();
            if(copy->val!=check)
                return false;
            if(copy->left)
                q.push(copy->left);
            if(copy->right)
                q.push(copy->right);
        }
        return true;
    }
};