// 145. Binary Tree Postorder Traversal - using 2 stacks

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
    vector<int> postorderTraversal(TreeNode *root)
    {
        // postorder traversal using 2 stacks. | postorder traversal - left right root;
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        stack<TreeNode *> s1, s2;
        s1.push(root);
        while (!s1.empty())
        {
            TreeNode *x = s1.top();
            s1.pop();
            s2.push(x);
            if (x->left != NULL)
            {
                s1.push(x->left);
            }
            if (x->right != NULL)
            {
                s1.push(x->right);
            }
        }
        while (!s2.empty())
        {
            TreeNode *root = s2.top();
            s2.pop();
            ans.push_back(root->val);
        }
        return ans;
    }
};