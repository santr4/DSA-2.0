// 863. All Nodes Distance K in Binary Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// step 1 : to first mark the parent nodes of all nodes.
// step 2 : then do bfs traversal and push them in the queue.
// step 3 : make a visited map that you have already visited those nodes.
// step 4 : initialize on dist variable to increment it whenever we traverse to up, right and left.
// Note - when the node is already visited don't push in queue.
// step 5 : when dist == k, then push remaining elements in the queue to a vector and return the vector.
class Solution
{
public:
    void markParents(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent_track, TreeNode *target)
    {
        queue<TreeNode *> queue;
        queue.push(root);
        while (!queue.empty())
        {
            TreeNode *current = queue.front();
            queue.pop();
            if (current->left)
            {
                parent_track[current->left] = current;
                queue.push(current->left);
            }
            if (current->right)
            {
                parent_track[current->right] = current;
                queue.push(current->right);
            }
        }
    }
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        unordered_map<TreeNode *, TreeNode *> parent_track;
        markParents(root, parent_track, target);
        unordered_map<TreeNode *, bool> visited;
        queue<TreeNode *> queue;
        queue.push(target);
        visited[target] = true;
        int curr_level = 0;
        while (!queue.empty())
        {
            int size = queue.size();
            if (curr_level == k)
            {
                break;
            }
            curr_level++;
            for (int i = 0; i < size; i++)
            {
                TreeNode *current = queue.front();
                queue.pop();
                if (current->left && !visited[current->left])
                {
                    queue.push(current->left);
                    visited[current->left] = true;
                }
                if (current->right && !visited[current->right])
                {
                    queue.push(current->right);
                    visited[current->right] = true;
                }
                if (parent_track[current] && !visited[parent_track[current]])
                {
                    queue.push(parent_track[current]);
                    visited[parent_track[current]] = true;
                }
            }
        }
        vector<int> result;
        while (!queue.empty())
        {
            TreeNode *current = queue.front();
            queue.pop();
            result.push_back(current->val);
        }
        return result;
    }
};