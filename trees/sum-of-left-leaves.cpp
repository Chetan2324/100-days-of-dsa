// LeetCode 404 - Sum of Left Leaves
// https://leetcode.com/problems/sum-of-left-leaves/

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {

        if (root == NULL)
            return 0;

        int sum = 0;

        if (root->left) {

            if (root->left->left == NULL && root->left->right == NULL) {
                sum += root->left->val;
            }
        }

        return sum +
               sumOfLeftLeaves(root->left) +
               sumOfLeftLeaves(root->right);
    }
};
