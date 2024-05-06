80. Remove Duplicates from Sorted Array II

    class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[nums[i]] >= 2)
            {
                nums[j] = nums[i];
                nums[j + 1] = nums[i];
                j += 2;
                i += (mp[nums[i]] - 1);
            }
            else
            {
                nums[j] = nums[i];
                j += 1;
            }
        }
        return j;
    }
};