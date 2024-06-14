// Check for Children Sum Property in a Binary Tree

class Solution
{
public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        // Add your code here
        if (root == nullptr)
        {
            return;
        }
        int sum = 0;
        if (root->left)
        {
            sum += root->left->data;
        }
        if (root->right)
        {
            sum += root->right->data;
        }
        if (sum >= root->data)
        {
            root->data = sum;
        }
        else
        {
            if (root->left)
            {
                root->left->data = root->data;
            }
            if (root->right)
            {
                root->right->data = root->data;
            }
        }
        isSumProperty(root->left);
        isSumProperty(root->right);
        int total = 0;
        if (root->left)
        {
            total += root->left->data;
        }
        if (root->right)
        {
            total += root->right->data;
        }
        if (root->right || root->left)
        {
            root->data = total;
        }
    }
};