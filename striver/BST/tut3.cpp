// Minimum element in BST

class Solution
{
public:
    int minValue(Node *root)
    {
        // Code here
        int mini = root->data;
        while (root != NULL)
        {
            if (root->left != NULL)
            {
                int x = root->left->data;
                mini = min(mini, x);
                root = root->left;
            }
            else
            {
                break;
            }
        }
        return mini;
    }
};