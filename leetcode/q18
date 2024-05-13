55. Jump Game

    class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        int max_id = nums[0];
        for (int i = 0; i < n; i++)
        {
            if (i + nums[i] >= max_id)
            {
                max_id = i + nums[i];
            }
            if (max_id <= i && max_id != n - 1)
            {
                return false;
            }
        }
        return true;
    }
};