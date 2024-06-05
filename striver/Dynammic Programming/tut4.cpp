// Minimal Cost

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCost(int index, vector<int> &height, vector<int> &dp, int k)
    {
        if (index == 0)
        {
            return 0;
        }
        if (dp[index] != -1)
        {
            return dp[index];
        }
        int mmSteps = INT_MAX;
        for (int i = 1; i <= k; i++)
        {
            if (index - i >= 0)
            {
                int jump = minCost(index - i, height, dp, k) + abs(height[index] - height[index - i]);
                mmSteps = min(mmSteps, jump);
            }
        }
        return dp[index] = mmSteps;
    }
    int minimizeCost(vector<int> &height, int n, int k)
    {
        // Code here
        vector<int> dp(n, -1);
        return minCost(n - 1, height, dp, k);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}