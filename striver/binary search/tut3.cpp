// 1482. Minimum Number of Days to Make m Bouquets

class Solution
{
public:
    bool func(vector<int> &bloomDay, int mid, int m, int k)
    {
        int n = bloomDay.size();
        int count = 0;
        int noOfB = 0;
        for (int i = 0; i < n; i++)
        {
            if (bloomDay[i] <= mid)
            {
                count++;
            }
            else
            {
                noOfB += (count / k);
                count = 0;
            }
        }
        noOfB += (count / k);
        return (noOfB >= m);
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int n = bloomDay.size();
        long long val = m * 1ll * k * 1ll;
        if (val > n)
        {
            return -1;
        }
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, bloomDay[i]);
            mini = min(mini, bloomDay[i]);
        }
        int low = mini;
        int high = maxi;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (func(bloomDay, mid, m, k))
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};