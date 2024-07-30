// Longest Sub-Array with Sum K

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function
        unordered_map<int, int> mp;
        int sum = 0;
        int maxLen = 0;
        for (int i = 0; i < N; i++)
        {
            sum += A[i];
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
};