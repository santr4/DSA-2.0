// 3186. Maximum Total Damage With Spell Casting

class Solution
{
#define ll long long
private:
    ll getMaxDamage(int index, vector<int> &uniquePowers, map<int, int> &frequencyMap, vector<ll> &dp)
    {
        if (index == uniquePowers.size())
        {
            return 0;
        }
        if (dp[index] != -1)
        {
            return dp[index];
        }
        ll skip = getMaxDamage(index + 1, uniquePowers, frequencyMap, dp);
        ll take = 0;
        int nextIndex = index + 1;
        while (nextIndex < uniquePowers.size() && abs(uniquePowers[nextIndex] - uniquePowers[index]) <= 2)
        {
            nextIndex++;
        }
        take = ((1ll) * frequencyMap[uniquePowers[index]] * uniquePowers[index]) + getMaxDamage(nextIndex, uniquePowers, frequencyMap, dp);
        return dp[index] = max(take, skip);
    }

public:
    long long maximumTotalDamage(vector<int> &power)
    {
        map<int, int> frequencyMap;
        vector<int> uniquePowers;
        for (auto p : power)
        {
            frequencyMap[p]++;
        }
        for (auto it : frequencyMap)
        {
            uniquePowers.push_back(it.first);
        }
        vector<ll> dp(frequencyMap.size(), -1);
        return getMaxDamage(0, uniquePowers, frequencyMap, dp);
    }
};