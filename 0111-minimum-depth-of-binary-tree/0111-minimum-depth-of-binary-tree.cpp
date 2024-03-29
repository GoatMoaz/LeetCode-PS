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
    int minDepth(TreeNode* root) {
        queue<TreeNode*> q;
        int ans=0;
        if(root==nullptr)
            return 0;
        q.push(root);
        while(!q.empty()){
            ans++;
            for (int i = q.size(); i > 0; --i) {
                TreeNode* copy=q.front();
                q.pop();
                if(!copy->left && !copy->right)
                    return ans;
                if(copy->left)
                    q.push(copy->left);
                if(copy->right)
                    q.push(copy->right);
            }

        }
        throw;
    }
};