// 1283. Find the Smallest Divisor Given a Threshold

class Solution
{
public:
    int func(vector<int> &nums, int mid)
    {
        int cnt = 0;
        int m = nums.size();
        for (int i = 0; i < m; i++)
        {
            if (nums[i] % mid != 0)
            {
                cnt += (nums[i] / mid) + 1;
            }
            else
            {
                cnt += nums[i] / mid;
            }
        }
        return cnt;
    }

    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int low = 1;
        int high = maxi;
        int ans = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int x = func(nums, mid);
            if (x <= threshold)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};