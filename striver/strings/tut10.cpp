// 1903. Largest Odd Number in String

class Solution
{
public:
    string largestOddNumber(string num)
    {
        int n = num.length();
        int j = n - 1;
        int ind = -1;
        while (j >= 0)
        {
            char c = num[j];
            int x;
            x = int(c - '0');
            if (x % 2 != 0)
            {
                ind = j;
                break;
            }
            --j;
        }
        string result = "";
        if (ind != -1)
        {
            for (int i = 0; i <= ind; i++)
            {
                result += num[i];
            }
        }
        return result;
    }
};