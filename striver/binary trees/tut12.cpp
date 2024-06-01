// 100. Same Tree

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
    bool checkSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }
        if (p == nullptr || q == nullptr)
        {
            return false;
        }
        // now we will do preorder traversal => root->left->right
        return ((p->val == q->val) && checkSameTree(p->left, q->left) && checkSameTree(p->right, q->right));
    }

    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        bool x = checkSameTree(p, q);
        return x;
    }
};