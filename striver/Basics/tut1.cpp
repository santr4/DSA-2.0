// 509. Fibonacci Number

class Solution
{
public:
    int fibo(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        return fibo(n - 1) + fibo(n - 2);
    }

    int fib(int n)
    {
        int ans = fibo(n);
        return ans;
    }
};