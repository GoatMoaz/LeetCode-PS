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
    bool isValidBST(TreeNode* root) {
    return isValidBST(root, nullptr, nullptr);
  }
    bool isValidBST(TreeNode* root , TreeNode* mn , TreeNode* mx) {
       if(root==nullptr)
           return true;
        if(mn && root->val <= mn->val)
            return false;
        if(mx && root->val >= mx->val)
            return false;
        return isValidBST(root->left , mn , root) && isValidBST(root->right , root , mx);
    }
};