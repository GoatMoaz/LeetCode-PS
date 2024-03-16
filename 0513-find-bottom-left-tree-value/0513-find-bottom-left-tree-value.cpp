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
    int findBottomLeftValue(TreeNode* root) {
        if(!root->left && !root->right)
            return root->val;
        queue<TreeNode*> q{{root}};
        TreeNode* copy;
        while(!q.empty()){
            copy=q.front();
            q.pop();
            if(copy->right)
                q.push(copy->right);
            if(copy->left)
                q.push(copy->left);
        }
        return copy->val;
    }
};