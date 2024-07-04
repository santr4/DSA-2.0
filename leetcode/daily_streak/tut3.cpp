// 2181. Merge Nodes in Between Zeros

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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;
        int sum = 0;
        stack<int> s;
        while (temp)
        {
            if (temp->val == 0)
            {
                count++;
            }
            sum += temp->val;
            if (count == 2)
            {
                count -= 1;
                s.push(sum);
                sum = 0;
            }
            temp = temp->next;
        }
        stack<int> s1;
        while (!s.empty())
        {
            s1.push(s.top());
            s.pop();
        }
        ListNode *head1 = new ListNode(s1.top());
        s1.pop();
        ListNode *temp1 = head1;
        while (!s1.empty())
        {
            head1->next = new ListNode(s1.top());
            s1.pop();
            head1 = head1->next;
        }
        return temp1;
    }
};