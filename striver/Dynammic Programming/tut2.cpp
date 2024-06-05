// ** climbing stairs
// ** Tabulation approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    vector<int> dp(n + 1, -1);
    // base cases.
    dp[0] = 1;
    dp[1] = 1;
    // iterative  approach
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2]; // I am adding both the cases because we have  to find all distinct total number of ways.
    }
    cout << dp[n] << endl;
    return 0;
}

//  ** space optimization

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int prev = 1;
    int prev2 = 1;
    for (int i = 2; i <= n; i++)
    {
        int curr_i = prev + prev2;
        prev2 = prev;
        prev = curr_i;
    }
    cout << prev << endl;
    return 0;
}