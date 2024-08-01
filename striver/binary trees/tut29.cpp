// ** preorder traversal of binary tree.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

void f(Node *root, vector<int> &ans)
{
    if (root == nullptr)
    {
        return;
    }
    ans.push_back(root->data);
    f(root->left, ans);
    f(root->right, ans);
}

vector<int> preOrder(Node *root)
{
    vector<int> ans;
    f(root, ans);
    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> ans = preOrder(root);
    int x = ans.size();
    for (int i = 0; i < x; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}

// ** inorder traversal - left root right
// ** postorder traversal - left right root