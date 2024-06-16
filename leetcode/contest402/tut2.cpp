// 3184. Count Pairs That Form a Complete Day I

class Solution
{
public:
    int countCompleteDayPairs(vector<int> &hours)
    {
        int n = hours.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j)
                {
                    if ((hours[i] + hours[j]) % 24 == 0)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};