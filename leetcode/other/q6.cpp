169. Majority Element

    class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        int max_ele = 0, max_freq = 0;
        for (auto i : mp)
        {
            if (i.second >= max_freq)
            {
                max_ele = i.first;
                max_freq = i.second;
            }
        }
        return max_ele;
    }
};