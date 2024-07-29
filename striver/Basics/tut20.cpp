// 125. Valid Palindrome

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string s1 = "";
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (isalnum(s[i]))
            {
                s1 += tolower(s[i]);
            }
        }
        int l = s1.length();
        int start = 0, end = l - 1;
        while (start <= end)
        {
            if (s1[start] != s1[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};