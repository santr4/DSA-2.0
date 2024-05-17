3. Longest Substring Without Repeating Characters

    class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.size() < 2)
        {
            return s.size();
        }
        int left = 0;
        int right = 0;
        int maxlen = INT_MIN;
        unordered_set<char> st;
        while (right != s.size())
        {
            if (st.find(s[right]) == st.end())
            {
                maxlen = max(maxlen, right - left + 1);
                st.insert(s[right]);
                right++;
            }
            else
            {
                st.erase(s[left]);
                left++;
            }
        }
        return maxlen;
    }
};
