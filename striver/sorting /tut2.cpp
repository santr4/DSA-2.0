// ** quick sort

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (v[i] <= pivot && i < high)
        {
            i++;
        }
        while (v[j] >= pivot && j > low)
        {
            j--;
        }
        if (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    swap(v[j], v[low]);
    return j;
}

void quicksort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int p_ind = partition(v, low, high);
        quicksort(v, low, p_ind - 1);
        quicksort(v, p_ind + 1, high);
    }
}

int main()
{
    vector<int> v = {13, 46, 24, 52, 20, 9};
    int n = v.size();
    quicksort(v, 0, n - 1);
    cout << "array after quick sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}