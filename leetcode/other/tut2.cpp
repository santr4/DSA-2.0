// kth smallest element in unsorted array using binary search.

#include <bits/stdc++.h>
using namespace std;

int count(vector<int> &v, int &mid)
{
    int cnt = 0;
    for (long long i = 0; i < v.size(); i++)
    {
        if (v[i] <= mid)
        {
            cnt++;
        }
    }
    return cnt;
}

int kthSmallest(vector<int> &v, int k)
{
    int low = *min_element(v.begin(), v.end());
    int high = *max_element(v.begin(), v.end());

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (count(v, mid) < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

int main()
{
    vector<int> v = {1, 4, 5, 3, 19, 3};
    int k = 3;
    cout << kthSmallest(v, k);
    return 0;
}