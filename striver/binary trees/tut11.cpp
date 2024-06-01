// ** 124. Binary tree maximum path sum

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution
{
public:
    int calculateMaxPath(TreeNode *root, int &maxi)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int lh = max(0, calculateMaxPath(root->left, maxi));
        int rh = max(0, calculateMaxPath(root->right, maxi));

        maxi = max(maxi, root->val + lh + rh);
        return max(lh, rh) + root->val;
    }

    int maxPath(TreeNode *root)
    {
        int maxi = INT_MIN;
        calculateMaxPath(root, maxi);
        return maxi;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->right = new TreeNode(6);
    root->left->right->right->right = new TreeNode(7);

    Solution solution;

    cout << "the maximum sum path in the binary tree is: " << endl;
    int maxPath = solution.maxPath(root);
    cout << maxPath << endl;
    return 0;
}