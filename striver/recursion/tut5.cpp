// 268. Missing Number

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int totalSum = (n * (n + 1)) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        int y = totalSum - sum;
        return y;
    }
};