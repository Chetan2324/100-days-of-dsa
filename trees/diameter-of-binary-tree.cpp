// LeetCode 543 - Diameter of Binary Tree
// https://leetcode.com/problems/diameter-of-binary-tree/

class Solution {
public:

    int height(TreeNode* root) {
        if (!root) return 0;

        return 1 + max(height(root->left),
                       height(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {

        if (!root) return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        int dia = max(diameterOfBinaryTree(root->left),
                      diameterOfBinaryTree(root->right));

        return max(leftHeight + rightHeight, dia);
    }
};
