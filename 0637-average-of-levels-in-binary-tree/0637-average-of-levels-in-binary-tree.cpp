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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(!root)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            double level=0,sz=0;
            for(int i=q.size() ; i>0 ; i--){
                TreeNode* copy = q.front();
                q.pop();
                level+=copy->val;
                sz++;
                if(copy->left)
                    q.push(copy->left);
                if(copy->right)
                    q.push(copy->right);
            }
            level/=sz;
            ans.push_back(level);
        }
        return ans;
    }
};