// Optimal Approach - Longest Consecutive Subsequence in an array

#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int> &a)
{
    int n = a.size();
    if (n == 0)
    {
        return 0;
    }
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt++;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}