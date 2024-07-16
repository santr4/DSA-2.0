// Ceil in BST

int findCeil(Node *root, int input)
{
    int ceil = -1;
    // Your code here
    while (root)
    {
        if (root->data == input)
        {
            return root->data;
        }
        else if (root->data < input)
        {
            root = root->right;
        }
        else
        {
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
}