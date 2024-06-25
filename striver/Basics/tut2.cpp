// 9. Palindrome Number

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        string s = to_string(x);
        bool z = true;
        int len = s.length();
        int l = 0, r = len - 1;
        while (l <= r)
        {
            if (s[l] != s[r])
            {
                z = false;
                break;
            }
            l++;
            r--;
        }
        return z;
    }
};