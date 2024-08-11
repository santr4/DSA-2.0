// 121. Best Time to Buy and Sell Stock
// o(n)

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int maxP = 0;
        int minP = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            minP = min(minP, prices[i]);
            maxP = max(maxP, prices[i] - minP);
        }
        return maxP;
    }
};