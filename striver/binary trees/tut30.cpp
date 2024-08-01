// ** level order traversal

#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> ans;
        if (root == nullptr)
        {
            return ans;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++)
            {
                Node *node = q.front();
                level.push_back(node->data);
                q.pop();
                if (node->left != NULL)
                {
                    q.push(node->left);
                }
                if (node->right != NULL)
                {
                    q.push(node->right);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};

void printV(const vector<int> &v)
{
    int x = v.size();
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Solution obj;
    vector<vector<int>> ans = obj.levelOrder(root);
    cout << "level order traversal of binary tree" << endl;
    for (const vector<int> &v : ans)
    {
        printV(v);
    }
    return 0;
}