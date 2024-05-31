// 110. Balanced Binary Tree

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
public:
    int getHeight(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);

        return max(leftHeight, rightHeight) + 1;
    }

    bool f(TreeNode *root)
    {
        if (root == nullptr)
        {
            return true;
        }
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
        }
        return false;
    }

    bool isBalanced(TreeNode *root)
    {
        bool ans = f(root);
        return ans;
    }
};