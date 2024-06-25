// Linked List Insertion

class Solution
{
public:
    // Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x)
    {
        // Your code here
        Node *temp = new Node(x);
        if (head == nullptr)
        {
            return temp;
        }
        temp->next = head;
        return temp;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)
    {
        // Your code here
        Node *temp = new Node(x);
        if (head == nullptr)
        {
            return temp;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
            temp->next = nullptr;
        }
        return head;
    }
};