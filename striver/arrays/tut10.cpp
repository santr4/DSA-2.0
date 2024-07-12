// 283. Move Zeroes

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int nonzero_index = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[nonzero_index] = nums[i];
                nonzero_index++;
            }
        }
        for (int i = nonzero_index; i < n; i++)
        {
            nums[i] = 0;
        }
    }
};