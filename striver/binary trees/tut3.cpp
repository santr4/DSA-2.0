// ** preorder traversal in binary tree.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void preorder(Node *root, vector<int> &arr)
{
    if (root == nullptr)
    {
        return;
    }
    arr.push_back(root->data);
    preorder(root->left, arr);
    preorder(root->right, arr);
}

vector<int> preOrder(Node *root)
{
    vector<int> arr;
    preorder(root, arr);
    return arr;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> result = preOrder(root);
    cout << "the preorder traversal for the binary tree is: " << endl;
    for (int it : result)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}