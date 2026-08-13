class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> path;

        function<void(TreeNode*, long long)> dfs = [&](TreeNode* node, long long sum) {
            if (!node) return;

            path.push_back(node->val);
            sum += node->val;

            if (!node->left && !node->right && sum == targetSum) {
                result.push_back(path);
            }

            dfs(node->left, sum);
            dfs(node->right, sum);

            path.pop_back();
        };

        dfs(root, 0);
        return result;
    }
};