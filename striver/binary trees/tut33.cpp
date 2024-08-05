// Top view of a binary tree

class Solution
{
public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        // Your code here
        vector<int> ans;
        if (root == nullptr)
        {
            return ans;
        }
        queue<pair<Node *, int>> q;
        map<int, int> mp;
        q.push({root, 0});
        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            Node *node = it.first;
            int line = it.second;
            if (mp.find(line) == mp.end())
            {
                mp[line] = node->data;
            }
            if (node->left != nullptr)
            {
                q.push({node->left, line - 1});
            }
            if (node->right != nullptr)
            {
                q.push({node->right, line + 1});
            }
        }
        for (auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};