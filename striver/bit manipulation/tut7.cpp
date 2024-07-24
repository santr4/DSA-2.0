// 29. Divide Two Integers

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }

        bool sign = (dividend < 0) == (divisor < 0);

        long long n = labs(dividend);
        long long d = labs(divisor);
        long long ans = 0;

        while (n >= d)
        {
            long long temp = d, multiple = 1;
            while (n >= (temp << 1))
            {
                temp <<= 1;
                multiple <<= 1;
            }
            n -= temp;
            ans += multiple;
        }

        return sign ? ans : -ans;
    }

    long long labs(long long x)
    {
        return x < 0 ? -x : x;
    }
};
