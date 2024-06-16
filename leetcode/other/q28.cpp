242. Valid Anagram

    class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        map<char, int> mps;
        map<char, int> mpt;
        int n = s.size();
        int m = t.size();
        int flag = 0;
        if (n != m)
        {
            return false;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                mps[s[i]]++;
            }
            for (int i = 0; i < m; i++)
            {
                mpt[t[i]]++;
            }
            for (int i = 0; i < n; i++)
            {
                if (mpt[s[i]] != mps[s[i]])
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
