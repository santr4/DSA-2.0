// 34. Find First and Last Position of Element in Sorted Array

class Solution
{
public:
    int lowerBound(vector<int> &nums, int n, int target)
    {
        int low = 0;
        int high = n - 1;
        int ans = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target)
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

    int upperBound(vector<int> &nums, int n, int target)
    {
        int low = 0;
        int high = n - 1;
        int ans = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target)
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

    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int lb = lowerBound(nums, n, target);
        int ub = upperBound(nums, n, target);
        if (lb == n || nums[lb] != target)
        {
            return {-1, -1};
        }
        return {lb, ub - 1};
    }
};