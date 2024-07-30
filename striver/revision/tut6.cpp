// string reversal over words

#include <bits/stdc++.h>
using namespace std;

string f(string s)
{
    int l = s.length();
    vector<string> v;
    string m = "";
    for (int i = 0; i < l; i++)
    {
        if (s[i] != ' ')
        {
            m += s[i];
        }
        else if (s[i] == ' ' && m.empty() == false)
        {
            v.push_back(m);
            m = "";
        }
    }
    if (!m.empty())
    {
        v.push_back(m);
    }
    int n = v.size();
    string ans = "";
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        ans += v[i];
        if (i < n - 1)
        {
            ans += " ";
        }
    }
    return ans;
}

int main()
{
    string s = " hello world ";
    string s1 = f(s);
    cout << s1 << endl;
    return 0;
}