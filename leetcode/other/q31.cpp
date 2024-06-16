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
            int comp = target - nums[i];
            if (mp.find(comp) == mp.end())
            {
                mp[nums[i]] = i;
            }
            else
            {
                return {mp[comp], i};
            }
        }
        return {-1, -1};
    }
};