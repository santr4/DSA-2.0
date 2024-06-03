// ** sort a stack using recursion.

#include <bits/stdc++.h>
using namespace std;

class SortedStack
{
public:
    stack<int> s;
    void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "\n";
}

void insert(stack<int> &st, int temp)
{
    if (st.empty() || temp >= st.top())
    {
        st.push(temp);
        return;
    }
    int ele = st.top();
    st.pop();
    insert(st, temp);
    st.push(ele);
}

void solve(stack<int> &st)
{
    if (st.size() == 1)
    {
        return;
    }
    int k = st.top();
    st.pop();
    solve(st);
    insert(st, k);
}

void SortedStack ::sort()
{
    solve(this->s);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SortedStack *ss = new SortedStack();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            ss->s.push(k);
        }
        ss->sort();
        printStack(ss->s);
    }
    return 0;
}
