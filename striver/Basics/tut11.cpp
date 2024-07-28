// LCM And GCD

class Solution
{
public:
    long long GCD(long long A, long long B)
    {
        if (B == 0)
        {
            return A;
        }
        GCD(B, A % B);
    }

    vector<long long> lcmAndGcd(long long A, long long B)
    {
        // code here
        long long pro = A * B;
        long long gcd = GCD(A, B);
        long long lcm = (pro / gcd);
        vector<long long> res = {lcm, gcd};
        return res;
    }
};