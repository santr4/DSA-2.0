// 13. Roman to Integer

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> v;
        v['I'] = 1;
        v['V'] = 5;
        v['X'] = 10;
        v['L'] = 50;
        v['C'] = 100;
        v['D'] = 500;
        v['M'] = 1000;
        int n = s.length();
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && (v[s[i]] < v[s[i + 1]]))
            {
                val -= v[s[i]];
            }
            else
            {
                val += v[s[i]];
            }
        }
        return val;
    }
};