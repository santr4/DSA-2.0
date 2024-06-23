// 215. Kth Largest Element in an Array

class Solution
{
public:
    int cnt(vector<int> &nums, int mid)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= mid)
            {
                count++;
            }
        }
        return count;
    }

    int findKthLargest(vector<int> &nums, int k)
    {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        int low = min;
        int high = max;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int countGreaterOrEqual = cnt(nums, mid);
            if (countGreaterOrEqual >= k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return high;
    }
};