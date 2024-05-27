// 22. Generate Parentheses

class Solution
{
public:
    void count(vector<string> &ans, string s, int n, int l, int r)
    {
        if (l == n && r == n)
        {
            ans.push_back(s);
            return;
        }

        if (l < n)
        {
            s.push_back('(');
            count(ans, s, n, l + 1, r);
            s.pop_back();
        }
        if (r < l)
        {
            s.push_back(')');
            count(ans, s, n, l, r + 1);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n)
    {
        int l = 0;
        int r = 0;
        vector<string> ans;
        string s;
        count(ans, s, n, l, r);
        return ans;
    }
};