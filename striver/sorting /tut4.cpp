// ** insertion sort

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && v[j - 1] > v[j])
        {
            swap(v[j - 1], v[j]);
            j--;
        }
    }
}
int main()
{
    vector<int> v = {34, 4, 1, 2, 100, -2};
    int n = v.size();
    insertion_sort(v, n);
    cout << "array after the insertion sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}