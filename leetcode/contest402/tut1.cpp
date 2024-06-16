// 3185. Count Pairs That Form a Complete Day II

class Solution
{
public:
    long long countCompleteDayPairs(vector<int> &hours)
    {
        unordered_map<int, int> mp;
        long long count = 0;
        for (int x : hours)
        {
            int rem = x % 24;
            int comp = (24 - rem) % 24;
            if (mp.find(comp) != mp.end())
            {
                count += mp[comp];
            }
            mp[rem]++;
        }
        return count;
    }
};