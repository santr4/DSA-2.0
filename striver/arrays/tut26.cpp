// longest consecutive subsequence in an array
// better approach - o(nlogn + n);

#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
    {
        return 0;
    }
    sort(arr.begin(), arr.end());
    int longest = 1;
    int lastSmaller = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            count++;
            lastSmaller = arr[i];
        }
        else if (arr[i] != lastSmaller)
        {
            count = 1;
            lastSmaller = arr[i];
        }
        longest = max(count, longest);
    }
    return longest;
}

int main()
{
    vector<int> arr = {3, 8, 5, 7, 6};
    int out = f(arr);
    cout << out << endl;
    return 0;
}
