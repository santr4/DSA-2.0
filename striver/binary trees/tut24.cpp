// 106. Construct Binary Tree from Inorder and Postorder Traversal

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
    TreeNode *constructTree(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder, int postStart, int postEnd, unordered_map<int, int> &inMap)
    {
        if (inStart > inEnd || postStart > postEnd)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(postorder[postEnd]);
        int inRoot = inMap[root->val];
        int numsRight = inEnd - inRoot;

        root->right = constructTree(inorder, inRoot + 1, inEnd, postorder, postEnd - numsRight, postEnd - 1, inMap);
        root->left = constructTree(inorder, inStart, inRoot - 1, postorder, postStart, postEnd - numsRight - 1, inMap);

        return root;
    }

    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int n = inorder.size();
        unordered_map<int, int> inMap;
        for (int i = 0; i < n; i++)
        {
            inMap[inorder[i]] = i;
        }
        TreeNode *root = constructTree(inorder, 0, n - 1, postorder, 0, postorder.size() - 1, inMap);

        return root;
    }
};