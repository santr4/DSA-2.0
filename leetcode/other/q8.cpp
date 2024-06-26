125. Valid Palindrome

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string cleanstring;
        for (auto ch : s)
        {
            if (isalnum(ch))
            {
                cleanstring += tolower(ch);
            }
        }
        int left = 0, right = cleanstring.size() - 1, flag = 0;
        while (left < right)
        {
            if (cleanstring[left] != cleanstring[right])
            {
                flag = 1;
                break;
            }
            else
            {
                left++;
                right--;
            }
        }
        if (flag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};