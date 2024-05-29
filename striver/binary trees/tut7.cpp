// ** iterative approach to preorder traversal of binary tree

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == nullptr)
        {
            return ans;
        }
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
            root = st.top();
            st.pop();
            ans.push_back(root->val);
            if (root->right != nullptr)
            {
                st.push(root->right);
            }
            if (root->left != nullptr)
            {
                st.push(root->left);
            }
        }
        return ans;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    vector<int> result = solution.preorderTraversal(root);
    int x = result.size();
    for (int i = 0; i < x; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}