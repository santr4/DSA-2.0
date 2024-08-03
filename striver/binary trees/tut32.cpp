// ** vertical order traversal

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
        left = right = NULL;
    }
};

class Solution
{
public:
    vector<vector<int>> findVertical(Node *root)
    {
        map<int, map<int, multiset<int>>> nodes; // vertical, level, multinodes.
        queue<pair<Node *, pair<int, int>>> todo;
        todo.push({root, {0, 0}});
        while (!todo.empty())
        {
            auto p = todo.front();
            todo.pop();
            Node *temp = p.first;
            int x = p.second.first;  // vertical
            int y = p.second.second; // level
            nodes[x][y].insert(temp->data);
            if (temp->left)
            {
                todo.push({temp->left, {x - 1, y + 1}});
            }
            if (temp->right)
            {
                todo.push({temp->right, {x + 1, y + 1}});
            }
        }

        vector<vector<int>> ans;
        for (auto p : nodes)
        {
            vector<int> col;
            for (auto q : p.second)
            {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};

void printResult(const vector<vector<int>> &result)
{
    for (auto level : result)
    {
        for (auto node : level)
        {
            cout << node << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->left->left->right = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(3);
    root->right->right = new Node(10);
    root->right->left = new Node(9);

    Solution sol;
    vector<vector<int>> verticalTraversal = sol.findVertical(root);
    printResult(verticalTraversal);
    return 0;
}