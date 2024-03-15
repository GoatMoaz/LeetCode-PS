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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(!root)
            return ans;
        q.push(root);
        while(!q.empty()){
            vector<int> row;
            for(int i=q.size() ; i>0 ; i--){
                TreeNode* copy=q.front();
                q.pop();
                row.push_back(copy->val);
                if(copy->left)
                    q.push(copy->left);
                if(copy->right)
                    q.push(copy->right);
            }
            ans.push_back(row);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};