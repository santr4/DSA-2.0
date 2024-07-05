// 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        vector<int> v = {-1, -1};
        if (!head || !head->next || !head->next->next)
        {
            return v;
        }
        vector<int> criticalPointsIndex;
        ListNode *prev = head;
        ListNode *curr = head->next;
        int index = 1;
        while (curr->next)
        {
            if ((curr->val > prev->val && curr->val > curr->next->val) || (curr->val < prev->val && curr->val < curr->next->val))
            {
                criticalPointsIndex.push_back(index);
            }
            prev = curr;
            curr = curr->next;
            index++;
        }
        int n = criticalPointsIndex.size();
        if (n < 2)
        {
            return v;
        }
        int maxi = criticalPointsIndex.back() - criticalPointsIndex.front();
        int mini = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            mini = min(mini, criticalPointsIndex[i] - criticalPointsIndex[i - 1]);
        }
        return {mini, maxi};
    }
};