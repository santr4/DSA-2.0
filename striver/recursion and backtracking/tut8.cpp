// 131. Palindrome Partitioning

class Solution
{
public:
    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }

    void palindromePartitioning(int index, string s, vector<vector<string>> &ans, vector<string> &helper)
    {
        if (index == s.size())
        {
            ans.push_back(helper);
            return;
        }
        for (int i = index; i < s.size(); i++)
        {
            if (isPalindrome(s, index, i))
            {
                helper.push_back(s.substr(index, i - index + 1));
                palindromePartitioning(i + 1, s, ans, helper);
                helper.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> helper;
        palindromePartitioning(0, s, ans, helper);
        return ans;
    }
};