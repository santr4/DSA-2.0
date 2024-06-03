// reverse a stack

class Solution
{
public:
    void insertAtBottom(stack<int> &St, int x)
    {
        if (St.size() == 0)
        {
            St.push(x);
        }
        else
        {
            int e = St.top();
            St.pop();
            insertAtBottom(St, x);
            St.push(e);
        }
    }

    void Reverse(stack<int> &St)
    {
        if (St.size() > 0)
        {
            int x = St.top();
            St.pop();
            Reverse(St);
            insertAtBottom(St, x);
        }
    }
};
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        stack<int> St;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int> res;
        while (St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for (int i = res.size() - 1; i >= 0; i--)
        {
            cout << res[i] << " ";
        }

        cout << endl;
    }
}