// 1011. Capacity To Ship Packages Within D Days

class Solution
{
public:
    int minCapacity(vector<int> &weights, int mid)
    {
        int n = weights.size();
        int count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + weights[i] <= mid)
            {
                sum += weights[i];
            }
            else
            {
                sum = 0;
                count += 1;
                --i;
            }
        }
        if (sum != 0 && sum <= mid)
        {
            count += 1;
        }
        return count;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += weights[i];
        }
        int high = sum;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int x = minCapacity(weights, mid);
            if (x <= days)
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