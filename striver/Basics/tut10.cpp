// 7. Reverse Integer

class Solution
{
public:
    int reverse(int x)
    {
        int y = 1;
        if (x < 0)
        {
            x = abs(x);
            y = -1;
        }
        long temp = 0;
        while (x > 0)
        {
            temp = temp * 10 + (x % 10);
            x = x / 10;
            if (temp > INT_MAX || temp < INT_MIN)
            {
                return 0;
            }
        }
        return static_cast<int>(temp * y);
    }
};