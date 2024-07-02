// 1781. Sum of Beauty of All Substrings

class Solution
{
public:
    int beautySum(string s)
    {
        int n = s.length();
        int sumBeauty = 0;
        for (int i = 0; i < n; i++)
        {
            int freq[26] = {0};
            for (int j = i; j < n; j++)
            {
                char c = s[j];
                freq[c - 'a']++;
                int maxF = INT_MIN, minF = INT_MAX;
                for (auto count : freq)
                {
                    if (count > 0)
                    {
                        maxF = max(maxF, count);
                        minF = min(minF, count);
                    }
                }
                sumBeauty += (maxF - minF);
            }
        }
        return sumBeauty;
    }
};