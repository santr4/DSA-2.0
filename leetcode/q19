205. Isomorphic Strings

    class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int s_len = s.size();
        int t_len = t.size();
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;
        for (auto &c : s)
        {
            if (s_map.count(c) != 0)
            {
                continue;
            }
            s_map[c] = s_map.size();
        }

        for (auto &c : t)
        {
            if (t_map.count(c) != 0)
            {
                continue;
            }
            t_map[c] = t_map.size();
        }
        for (int i = 0; i < s_len; i++)
        {
            if (s_map[s[i]] != t_map[t[i]])
            {
                return false;
            }
        }
        return true;
    }
};