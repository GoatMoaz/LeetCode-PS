#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        GOAT
        if (depth == 1) {
            TreeNode *newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        queue<TreeNode *> q{{root}};
        int d = 0;
        while (!q.empty()) {
            d++;
            for (int i = q.size(); i > 0; --i) {
                TreeNode *copy = q.front();
                q.pop();
                if (copy->left)
                    q.push(copy->left);
                if (copy->right)
                    q.push(copy->right);
                if (d == depth - 1) {
                    TreeNode *newNodeLeft = copy->left;
                    TreeNode *newNodeRight = copy->right;
                    copy->left = new TreeNode(val);
                    copy->right = new TreeNode(val);
                    copy->left->left = newNodeLeft;
                    copy->right->right = newNodeRight;
                }
            }
            if (d == depth - 1)
                break;
        }
        return root;
    }
};