// Introduction to Linked List

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Solution
{
public:
    Node *constructLL(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        Node *temp = new Node(arr[0]);
        Node *head = temp;
        for (int i = 1; i < n; i++)
        {
            Node *temp1 = new Node(arr[i]);
            temp->next = temp1;
            temp = temp->next;
        }
        return head;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        Node *ans = obj.constructLL(arr);
        while (ans)
        {
            cout << ans->data << " ";
            ans = ans->next;
        }
        cout << "\n";
    }
    return 0;
}