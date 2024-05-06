2487. Remove Nodes From Linked List

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
    ListNode *removeNodes(ListNode *head)
    {
        stack<int> st;
        ListNode *temp = head;
        ListNode *prev = nullptr;
        while (temp != NULL)
        {
            while (!st.empty() && st.top() < temp->val)
            {
                st.pop();
            }
            st.push(temp->val);
            temp = temp->next;
        }
        ListNode *newHead = nullptr;
        while (!st.empty())
        {
            int value = st.top();
            st.pop();
            ListNode *newnode = new ListNode(value);
            newnode->next = newHead;
            newHead = newnode;
        }
        return newHead;
    }
};