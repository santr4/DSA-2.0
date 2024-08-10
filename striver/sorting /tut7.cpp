// Bubble Sort

class Solution
{
public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here
        if (n == 1)
        {
            return;
        }
        int didSwap = 0;
        for (int j = 0; j <= n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            return;
        }
        bubbleSort(arr, n - 1);
    }
};
