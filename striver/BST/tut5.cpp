// Floor in BST

class Solution
{

public:
    int floor(Node *root, int x)
    {
        // Code here
        int floor = -1;
        while (root)
        {
            if (root->data == x)
            {
                return root->data;
            }
            else if (root->data > x)
            {
                root = root->left;
            }
            else
            {
                floor = root->data;
                root = root->right;
            }
        }
        return floor;
    }
};