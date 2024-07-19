// 860. Lemonade Change

class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int n = bills.size();
        bool x = true;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[bills[i]]++;
            if (bills[i] == 10)
            {
                if (mp[5] > 0)
                {
                    mp[5]--;
                }
                else
                {
                    x = false;
                    break;
                }
            }
            if (bills[i] == 20)
            {
                if (mp[10] > 0 && mp[5] > 0)
                {
                    mp[10]--;
                    mp[5]--;
                }
                else if (mp[10] == 0 && mp[5] >= 3)
                {
                    mp[5] -= 3;
                }
                else
                {
                    x = false;
                    break;
                }
            }
        }
        return x;
    }
};