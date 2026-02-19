// LeetCode 144 - Binary Tree Preorder Traversal
// https://leetcode.com/problems/binary-tree-preorder-traversal/

class Solution {
public:

    void preorder(TreeNode* root, vector<int>& vt) {

        if (root == NULL)
            return;

        vt.push_back(root->val);
        preorder(root->left, vt);
        preorder(root->right, vt);
    }

    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> vt;
        preorder(root, vt);

        return vt;
    }
};
