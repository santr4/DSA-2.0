// 1021. Remove Outermost Parentheses

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string result = "";
        int balance = 0;
        int n = s.length();
        int i = 0;
        while (i < n)
        {
            if (s[i] == '(')
            {
                if (balance > 0)
                {
                    result += s[i];
                }
                balance++;
            }
            else
            {
                balance--;
                if (balance > 0)
                {
                    result += s[i];
                }
            }
            i++;
        }
        return result;
    }
};