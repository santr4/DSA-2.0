// 875. Koko Eating Bananas

class Solution
{
#define ll long long
public:
    ll func(vector<int> &piles, int mid)
    {
        ll x = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++)
        {
            x += ceil((double)piles[i] / (double)mid);
        }
        return x;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            ll totalHours = func(piles, mid);
            if (totalHours <= h)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};