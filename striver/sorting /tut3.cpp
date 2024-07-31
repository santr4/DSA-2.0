// ** selection sort

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min_ind])
            {
                min_ind = j;
            }
        }
        if (min_ind != i)
        {
            swap(v[i], v[min_ind]);
        }
    }
}

int main()
{
    vector<int> v = {5, -1, 6, 100, 99, 4};
    int n = v.size();
    selectionSort(v, n);
    cout << "after applying selection sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}