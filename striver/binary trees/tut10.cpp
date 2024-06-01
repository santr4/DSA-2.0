// Diameter of a binary tree

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
    int d = 0;

    int calculateHeight(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int lh = calculateHeight(root->left);
        int rh = calculateHeight(root->right);

        d = max(d, lh + rh);

        return 1 + max(lh, rh);
    }

    int diameter(TreeNode *root)
    {
        calculateHeight(root);

        return d;
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        int ans = diameter(root);
        return ans;
    }
};