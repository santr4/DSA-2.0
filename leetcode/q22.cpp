290. Word Pattern

    class Solution
{
public:
    bool wordPattern(string p, string s)
    {
        vector<string> st;
        string curr = "";
        for (auto it : s)
        {
            if (it == ' ')
            {
                st.push_back(curr);
                curr = "";
                continue;
            }
            curr += it;
        }
        st.push_back(curr);
        if (st.size() != p.size())
        {
            return false;
        }
        map<char, string> mp;
        map<string, char> check;
        for (int i = 0; i < p.size(); i++)
        {
            if (!mp.count(p[i]))
            {
                mp[p[i]] = st[i];
                if (check.count(st[i]))
                {
                    return false;
                }
                check[st[i]] = p[i];
            }
            else
            {
                if (mp[p[i]] != st[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};