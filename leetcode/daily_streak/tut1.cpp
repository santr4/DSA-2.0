// 633. Sum of Square Numbers

// ** Approach 1 :

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        for (long a = 0; a * a <= c; a++)
        {
            double b = sqrt(c - a * a);
            if (b == (int)b)
            {
                return true;
            }
        }
        return false;
    }
};

// ** Approach 2

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long left = 0;
        long right = static_cast<long>(sqrt(c));

        while (left <= right)
        {
            long curr_sum = left * left + right * right;
            if (curr_sum == c)
            {
                return true;
            }
            if (curr_sum < c)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return false;
    }
};