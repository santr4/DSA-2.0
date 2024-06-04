#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long func(int n, vector<long long> &dp, long long mod)
    {
        if (n <= 1)
            return n;
        if (dp[n] != -1)
            return dp[n];
        dp[n] = (func(n - 1, dp, mod) + func(n - 2, dp, mod)) % mod;
        return dp[n];
    }
    long long int topDown(int n)
    {
        vector<long long> dp(n + 1, -1);
        long long mod = 1e9 + 7;
        return func(n, dp, mod);
    }
    long long int bottomUp(int n)
    {
        if (n <= 1)
            return n;
        vector<long long> dp(n + 1, -1);
        long long mod = 1e9 + 7;
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        }
        return dp[n];
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans)
            cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}