// ** boundary traversal in binary tree.
// ** time complexity => O(n).

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    bool isLeaf(TreeNode *node)
    {
        return !node->left && !node->right;
    }

    void addLeftBoundary(TreeNode *root, vector<int> &ans)
    {
        TreeNode *node = root->left;
        while (node)
        {
            if (!isLeaf(node))
            {
                ans.push_back(node->data);
            }
            if (node->left)
            {
                node = node->left;
            }
            else
            {
                node = node->right;
            }
        }
    }

    void addRightBoundary(TreeNode *root, vector<int> &ans)
    {
        TreeNode *node = root->right;
        vector<int> temp;
        while (node)
        {
            if (!isLeaf(node))
            {
                temp.push_back(node->data);
            }
            if (node->right)
            {
                node = node->right;
            }
            else
            {
                node = node->left;
            }
        }
        for (int i = temp.size() - 1; i >= 0; --i)
        {
            ans.push_back(temp[i]);
        }
    }

    void addLeafBoundary(TreeNode *root, vector<int> &ans)
    {
        if (isLeaf(root))
        {
            ans.push_back(root->data);
            return;
        }
        if (root->left)
        {
            addLeafBoundary(root->left, ans);
        }
        if (root->right)
        {
            addLeafBoundary(root->right, ans);
        }
    }

    vector<int> printBoundary(TreeNode *root)
    {
        vector<int> ans;
        if (!root)
        {
            return ans;
        }
        if (!isLeaf(root))
        {
            ans.push_back(root->data);
        }
        addLeftBoundary(root, ans);
        addLeafBoundary(root, ans);
        addRightBoundary(root, ans);

        return ans;
    }

    void printResult(vector<int> result)
    {
        int n = result.size();
        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution solution;

    vector<int> result = solution.printBoundary(root);
    cout << "the boundary traversal of the binary tree: " << endl;
    solution.printResult(result);
    return 0;
}