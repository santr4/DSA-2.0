// Subarray with given XOR

int Solution::solve(vector<int> &A, int B)
{
    int xr = 0;
    int n1 = A.size();
    map<int, int> mp;
    mp[xr]++;
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        xr = xr ^ A[i];
        int x = xr ^ B;
        count += mp[x];
        mp[xr]++;
    }
    return count;
}
