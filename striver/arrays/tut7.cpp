// Largest subarray with 0 sum

class Solution
{
public:
    int maxLen(vector<int> &arr, int n)
    {
        // Your code here
        unordered_map<int, int> mp;
        int maxi = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
            {
                maxi = i + 1;
            }
            else
            {
                if (mp.find(sum) != mp.end())
                {
                    maxi = max(maxi, i - mp[sum]);
                }
                else
                {
                    mp[sum] = i;
                }
            }
        }
        return maxi;
    }
};