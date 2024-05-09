3075. Maximize Happiness of Selected Children

    class Solution
{
public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        int n = happiness.size();
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long maxHappy = 0;
        if (k == 1)
        {
            maxHappy += happiness[0];
            return maxHappy;
        }
        maxHappy += happiness[0];
        for (int i = 1; i <= k - 1; i++)
        {
            if ((happiness[i] - i) >= 0)
            {
                maxHappy += (happiness[i] - i);
            }
        }
        return maxHappy;
    }
};