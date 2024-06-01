// 1. Two Sum

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x = target - nums[i];
            if (mp.find(x) != mp.end())
            {
                return {mp[x], i};
            }
            mp[nums[i]] = i;
        }
        return {-1, -1};
    }
};