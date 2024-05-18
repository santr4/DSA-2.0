92. Reverse Linked List II

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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        // to handle the empty list case.
        if (head == NULL)
        {
            return nullptr;
        }
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        // to reach the node just before the left.
        ListNode *prev = dummy;
        for (int i = 0; i < left - 1; i++)
        {
            prev = prev->next;
        }
        // start reversing the sublist.
        ListNode *current = prev->next;
        ListNode *next = nullptr;
        for (int i = 0; i < right - left; i++)
        {
            next = current->next;
            current->next = next->next;
            next->next = prev->next;
            prev->next = next;
        }
        return dummy->next;
    }
};