// 503. Next Greater Element II

class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &a)
    {
        int n = a.size();
        vector<int> v(n, -1);
        stack<int> st;
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            while (!st.empty() && (a[i % n] >= st.top()))
            { // here this code will check which all elements are smaller than the current element and pop it.
                st.pop();
            }
            if (!st.empty() && (i < n))
            { // now the next greater element for the current element is assigned.
                v[i] = st.top();
            }
            st.push(a[i % n]);
        }
        return v;
    }
};