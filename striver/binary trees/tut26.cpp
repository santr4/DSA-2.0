// 112. Path Sum

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
    bool f(TreeNode *root, int sum, int curr)
    {
        if (root == nullptr)
        {
            return false;
        }
        curr += root->val;
        if (root->left == NULL && root->right == NULL && curr == sum)
        {
            return true;
        }
        if (f(root->left, sum, curr) || f(root->right, sum, curr))
        {
            return true;
        }
        // curr -= root->val;
        return false;
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (root == NULL)
        {
            return false;
        }
        return f(root, targetSum, 0);
    }
};