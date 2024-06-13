// 992. Subarrays with K Different Integers

class Solution
{
public:
    int subarrayAtmostKDistinct(vector<int> &nums, int h)
    {
        int n = nums.size();
        if (h == 0)
        {
            return 0;
        }
        int differentInteger = 0;
        int left = 0;
        int count = 0;
        unordered_map<int, int> mp;
        for (int right = 0; right < n; right++)
        {
            mp[nums[right]]++;
            if (mp[nums[right]] == 1)
            {
                differentInteger++;
            }
            while (differentInteger > h)
            {
                mp[nums[left]]--;
                if (mp[nums[left]] == 0)
                {
                    differentInteger--;
                }
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return subarrayAtmostKDistinct(nums, k) - subarrayAtmostKDistinct(nums, k - 1);
    }
};