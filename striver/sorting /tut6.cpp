// Merge Sort

class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        // Your code here
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;
        int larr[n1], rarr[n2];
        for (int i = 0; i < n1; i++)
        {
            larr[i] = arr[i + l];
        }
        for (int j = 0; j < n2; j++)
        {
            rarr[j] = arr[m + 1 + j];
        }
        i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2)
        {
            if (larr[i] <= rarr[j])
            {
                arr[k] = larr[i];
                i++;
                k++;
            }
            else
            {
                arr[k] = rarr[j];
                j++;
                k++;
            }
        }
        while (i < n1)
        {
            arr[k] = larr[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            arr[k] = rarr[j];
            j++;
            k++;
        }
    }

public:
    void mergeSort(int arr[], int l, int r)
    {
        // code here
        if (l < r)
        {
            int m = l + (r - l) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
};