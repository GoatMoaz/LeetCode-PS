class Solution {
private:
    void dfs(TreeNode *original, TreeNode *cloned, TreeNode *target, TreeNode *&ans) {
        if (ans != nullptr)
            return;
        if (original == nullptr)
            return;
        if (original == target) {
            ans = cloned;
            return;
        }
        dfs(original->left, cloned->left, target, ans);
        dfs(original->right, cloned->right, target, ans);
    }

public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        TreeNode *ans = nullptr;
        dfs(original, cloned, target, ans);
        return ans;
    }
};