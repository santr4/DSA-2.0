// 35. Search Insert Position

class Solution
{
public:
    int lowerBound(vector<int> &nums, int target, int n)
    {
        int low = 0;
        int high = n - 1;
        int ans = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target)
            {
                if (nums[mid] == target)
                {
                    return mid;
                }
                else
                {
                    ans = mid;
                    high = mid - 1;
                }
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int lb = lowerBound(nums, target, n);
        return lb;
    }
};