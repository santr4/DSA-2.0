// 1838. Frequency of the Most Frequent Element

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        int max_freq = 0;
        long currentSum = 0;
        sort(nums.begin(), nums.end());
        for (int l = 0, r = 0; r < nums.size(); r++)
        {
            currentSum += nums[r];
            while (currentSum + k < static_cast<long>(nums[r]) * (r - l + 1))
            {
                currentSum -= nums[l];
                l++;
            }
            max_freq = max(max_freq, r - l + 1);
        }
        return max_freq;
    }
};