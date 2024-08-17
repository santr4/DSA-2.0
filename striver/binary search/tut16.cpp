// ceil the floor

int func1(vector<int> &a, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] <= x)
        {
            ans = a[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int func2(vector<int> &a, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] >= x)
        {
            ans = a[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    // Write your code here.
    int floor = func1(a, n, x);
    int ceil = func2(a, n, x);
    return make_pair(floor, ceil);
}