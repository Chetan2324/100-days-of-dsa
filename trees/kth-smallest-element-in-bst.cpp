// LeetCode 230 - Kth Smallest Element in a BST

class Solution {
public:
    int result = -1;

    void solve(TreeNode* root, int &k) {
        if (!root) return;

        solve(root->left, k);

        k--;
        if (k == 0) {
            result = root->val;
            return;
        }

        if (result == -1)
            solve(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        solve(root, k);
        return result;
    }
};
