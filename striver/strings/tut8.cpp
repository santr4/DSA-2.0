// 8. String to Integer (atoi)

class Solution
{
public:
    int myAtoi(string s)
    {
        int n = s.length();
        int num = 0;
        int i = 0;
        while (i < n && s[i] == ' ')
        {
            i++;
        }
        int sign = 1;
        if (i < n && (s[i] == '-' || s[i] == '+'))
        {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < n && isdigit(s[i]))
        {
            int x = s[i] - '0';
            if (num > (INT_MAX - x) / 10)
            {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            num = num * 10 + x;
            i++;
        }
        return num * sign;
    }
};