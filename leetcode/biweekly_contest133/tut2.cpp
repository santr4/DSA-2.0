// 3191. Minimum Operations to Make Binary Array Elements Equal to One I

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int n = nums.size();
        int st = 0;
        int end;
        int ans = 0;
        while (st < n)
        {
            end = st;
            if (nums[st] == 0)
            {
                if (st + 3 > n)
                {
                    return -1;
                }
                while (end < st + 3)
                {
                    nums[end] = !nums[end];
                    end++;
                }
                ans++;
            }
            st++;
        }
        return ans;
    }
};