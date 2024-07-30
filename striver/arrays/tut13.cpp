// 1752. Check if Array Is Sorted and Rotated

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                count++;
            }
        }
        if (nums[0] < nums[n - 1])
        {
            count++;
        }
        if (count <= 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};