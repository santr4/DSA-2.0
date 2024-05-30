// ** length of longest substring without repeating characters
// ** approach 1

#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    if (s.size() == 0)
    {
        return 0;
    }
    int maxans = INT_MIN;
    unordered_set<int> set;
    int l = 0;
    for (int r = 0; r < s.size(); r++)
    {
        if (set.find(s[r]) != set.end())
        {
            while (l < r && set.find(s[r]) != set.end())
            {
                set.erase(s[l]);
                l++;
            }
        }
        set.insert(s[r]);
        maxans = max(maxans, r - l + 1);
    }
    return maxans;
}

int main()
{
    string s;
    cin >> s;
    int x = solve(s);
    cout << "the length of the longest substring without repeating characters: " << endl;
    cout << x << endl;
    return 0;
}

// ** approach 2

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string str)
    {
        vector<int> mpp(256, -1);
        int left = 0, right = 0;
        int n = str.size();
        int len = 0;
        while (right < n)
        {
            if (mpp[str[right]] != -1)
            {
                // therefore we will shift the left pointer
                left = max(left, mpp[str[right]] + 1);
            }
            mpp[str[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};

int main()
{
    string str = "abcaabcda";
    Solution obj;
    cout << "the length of the longest substring without repeating characters is: " << endl;
    cout << obj.lengthOfLongestSubstring(str) << endl;
    return 0;
}