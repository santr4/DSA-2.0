// ** Longest Subarray Sum K - using prefix sum and hashmap.

#include <bits/stdc++.h>
using namespace std;

int longSubSumK(vector<int> v, int K)
{
    int n = v.size();
    int sum = 0;
    int maxLen = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == K)
        {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - K;
        if (mp.find(rem) != mp.end())
        {
            maxLen = max(maxLen, i - mp[rem]);
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return maxLen;
}

int main()
{
    vector<int> v = {10, 5, 2, 7, 1, 9};
    int K = 15;
    int output = longSubSumK(v, K);
    cout << output << endl;
    return 0;
}