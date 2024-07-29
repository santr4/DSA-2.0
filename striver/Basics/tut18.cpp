// Find all factorial numbers less than or equal to n

class Solution
{
public:
    long long x = 1;
    long long i = 1;
    vector<long long> v{1};
    vector<long long> factorialNumbers(long long n)
    {
        // Write Your Code here
        if (x > n)
        {
            return v;
        }
        while (true)
        {
            i++;
            x *= i;
            if (x > n)
            {
                break;
            }
            v.push_back(x);
        }
        return v;
    }
};