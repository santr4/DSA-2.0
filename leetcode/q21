121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = prices[0];
        int maxP = 0;
        for(int i = 1;i < n;i++){
            maxP = max(maxP, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }
        return maxP;
    }
};