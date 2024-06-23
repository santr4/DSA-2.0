// ** selection sort

#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] <= arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    vector<int> arr = {18, 2, 7, 2, 1, -1, 0, 99};
    int n = arr.size();
    selection_sort(arr, n);
    cout << "after applying selection_sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}