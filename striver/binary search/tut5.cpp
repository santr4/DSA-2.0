// 33. Search in Rotated Sorted Array

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            // now we will check which half is sorted -> left or right.
            if (nums[low] <= nums[mid])
            {
                if (nums[low] <= target && target <= nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            if (nums[mid] <= nums[high])
            {
                if (nums[mid] <= target && target <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};