2816. Double a Number Represented as a Linked List

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
    int carry = 0;

public:
    void lx(ListNode *head)
    {
        if (head)
        {
            lx(head->next);
            if (head)
            {
                head->val = 2 * head->val + carry;
                carry = head->val / 10;
                head->val %= 10;
            }
        }
    }
    ListNode *doubleIt(ListNode *head)
    {
        lx(head);
        return (carry) ? new ListNode(carry, head) : head;
    }
};