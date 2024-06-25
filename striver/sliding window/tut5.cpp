// 1004. Max Consecutive Ones III

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int n = nums.size(), l = 0, r = 0, max_l = 0, zeroes = 0;
        while (r < n)
        {
            if (nums[r] == 0)
            {
                zeroes++;
            }
            if (zeroes > k)
            {
                if (nums[l] == 0)
                {
                    zeroes--;
                }
                l++;
            }
            else
            {
                int len = r - l + 1;
                max_l = max(max_l, len);
            }
            r++;
        }
        return max_l;
    }
};