// 235. Lowest Common Ancestor of a Binary Search Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == nullptr)
        {
            return root;
        }
        int curr = root->val;
        if (p->val < curr && q->val < curr)
        {
            return lowestCommonAncestor(root->left, p, q);
        }
        else if (p->val > curr && q->val > curr)
        {
            return lowestCommonAncestor(root->right, p, q);
        }
        else
        {
            return root;
        }
    }
};