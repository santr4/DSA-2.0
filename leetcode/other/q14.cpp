392. Is Subsequence

    class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int n = t.size();
        int m = s.size();
        int p1 = 0;
        int p2 = 0;
        int count = 0;
        while (p1 < n && p2 < m)
        {
            if (s[p2] == t[p1])
            {
                count++;
                p2++;
                p1++;
            }
            else
            {
                p1++;
            }
        }
        if (count == m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};