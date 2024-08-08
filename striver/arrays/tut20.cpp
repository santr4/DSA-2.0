// 169. Majority Element

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int l = n / 2;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        int x = 0;
        for (auto it : mp)
        {
            if (it.second > l)
            {
                x = it.first;
                break;
            }
        }
        return x;
    }
};