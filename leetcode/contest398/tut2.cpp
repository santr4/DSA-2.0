// ** 3152. Special Array II
// ** using predix sum -> very important

class Solution
{
public:
    vector<bool> isArraySpecial(vector<int> &nums, vector<vector<int>> &queries)
    {
        vector<int> store(nums.size(), 0);
        for (int i = 1; i < nums.size(); i++)
        {
            if ((nums[i] % 2) != (nums[i - 1] % 2))
            {
                store[i] = store[i - 1] + 1;
            }
            else
            {
                store[i] = store[i - 1];
            }
        }

        vector<bool> ans;
        for (const auto &query : queries)
        {
            int left = query[0];
            int right = query[1];
            if ((store[right] - store[left]) == (right - left))
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};