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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr || (!root->left && !root->right))
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            for(int i = q.size() ; i>0 ; i--){
                TreeNode* copy=q.front();
                q.pop();
                if(copy->left){
                    if(!copy->left->left && !copy->left->right)
                        ans+=copy->left->val;
                    else
                        q.push(copy->left);
                }
                if(copy->right)
                    q.push(copy->right);
            }
        }
        return ans;
    }
};