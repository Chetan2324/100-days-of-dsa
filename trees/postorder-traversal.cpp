// LeetCode 145 - Binary Tree Postorder Traversal
// https://leetcode.com/problems/binary-tree-postorder-traversal/

class Solution {
public:

    void postorder(TreeNode* root, vector<int>& vt) {

        if (root == NULL)
            return;

        postorder(root->left, vt);
        postorder(root->right, vt);
        vt.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> vt;
        postorder(root, vt);

        return vt;
    }
};
