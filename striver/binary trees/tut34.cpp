// Bottom View of Binary Tree

class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        // Your Code Here
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
            mp[line] = node->data;
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