// 199. Binary Tree Right Side View

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
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> rightside;
        if (root == nullptr)
        {
            return rightside;
        }
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int levelsize = q.size();
            for (int i = 0; i < levelsize; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                if (i == levelsize - 1)
                {
                    rightside.push_back(node->val);
                }
                if (node->left != nullptr)
                {
                    q.push(node->left);
                }
                if (node->right != nullptr)
                {
                    q.push(node->right);
                }
            }
        }
        return rightside;
    }
};