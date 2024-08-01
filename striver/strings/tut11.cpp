// 205. Isomorphic Strings

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int x = s.length();
        int y = t.length();
        if (x != y)
        {
            return false;
        }
        map<char, char> mp1, mp2;
        bool z = true;
        for (int i = 0; i < x; i++)
        {
            if (mp1.find(s[i]) == mp1.end() && mp2.find(t[i]) == mp2.end())
            {
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }
            else
            {
                if (mp1[s[i]] != t[i] || mp2[t[i]] != s[i])
                {
                    z = false;
                }
            }
        }
        return z;
    }
};