// 3210. Find the Encrypted String

class Solution
{
public:
    string getEncryptedString(string s, int k)
    {
        int n = s.length();
        unordered_map<int, char> mp;
        for (int i = 0; i < n; i++)
        {
            mp[i] = s[i];
        }
        string str = "";
        for (int i = 0; i < n; i++)
        {
            char c = mp[(i + k) % n];
            str += c;
        }
        return str;
    }
};