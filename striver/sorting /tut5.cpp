// ** quicksort

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (v[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (v[j] > pivot && j >= low + 1)
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
        int P_I = partition(v, low, high);
        quicksort(v, low, P_I - 1);
        quicksort(v, P_I + 1, high);
    }
}

int main()
{
    vector<int> v = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = v.size();
    int low = 0;
    int high = n - 1;
    quicksort(v, low, high);
    cout << "array after the quicksort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}