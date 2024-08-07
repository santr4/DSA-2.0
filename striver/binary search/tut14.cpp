// Aggressive cows - BS on answers

#include <bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> &v, int dist, int C)
{
    int cntCows = 1, last = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - last >= dist)
        {
            cntCows++;
            last = v[i];
        }
        if (cntCows >= C)
        {
            return true;
        }
    }
    return false;
}

int aggrcow(vector<int> &v, int C)
{
    int n = v.size();
    sort(v.begin(), v.end());
    int low = 1, high = v[n - 1] - v[0];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canWePlace(v, mid, C) == true)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, C;
        cin >> N >> C;
        vector<int> v;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int out = aggrcow(v, C);
        cout << out << endl;
    }
    return 0;
}