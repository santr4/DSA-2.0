// 98. Validate Binary Search Tree

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
class Solution
{
    long long prev = LONG_MIN;
    void inorderTraversal(TreeNode *root, bool &x)
    {
        if (!root)
        {
            return;
        }
        inorderTraversal(root->left, x);
        if (root->val <= prev)
        {
            x = 0;
        }
        prev = root->val;
        inorderTraversal(root->right, x);
    }

public:
    bool isValidBST(TreeNode *root)
    {
        bool x = 1;
        inorderTraversal(root, x);
        return x;
    }
};