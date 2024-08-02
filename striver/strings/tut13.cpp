// 242. Valid Anagram

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int x = s.length();
        int y = t.length();
        if (x != y)
        {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};