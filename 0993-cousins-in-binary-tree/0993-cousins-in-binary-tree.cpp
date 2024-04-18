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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==nullptr)
            return false;
        queue<TreeNode*> q{{root}};
        while(q.size()){
            bool fx=false,fy=false;
            for(int i = q.size() ; i>0 ; i--){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->val==x)
                    fx=true;
                else if (curr->val==y)
                    fy=true;
                else if (curr->left && curr->right){
                    if (curr->left->val==x && curr->right->val==y)
                        return false;
                    if (curr->left->val==y && curr->right->val==x)
                        return false;
                }
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            if(fx && fy)
                return true;
            if(fx || fy)
                return false;
        }
        return false;
    }
};