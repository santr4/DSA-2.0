// Rat Count House

#include <bits/stdc++.h>
using namespace std;

int countH(int r, int unit, int arr[], int n)
{
    if (n == 0)
    {
        return -1;
    }
    int a = r * unit;
    int ind = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum >= a)
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        return 0;
    }
    return (ind + 1);
}

int main()
{
    int r, unit, n;
    cin >> r >> unit >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = countH(r, unit, arr, n);
    cout << ans << endl;
    return 0;
}