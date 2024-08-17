// Number of occurrence

class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int f1(int arr[], int n, int x)
    {
        int low = 0, high = n - 1;
        int ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (arr[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }

    int f2(int arr[], int n, int x)
    {
        int low = 0, high = n - 1;
        int ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (arr[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }

    int count(int arr[], int n, int x)
    {
        // code here
        int firstO = f1(arr, n, x);
        int lastO = f2(arr, n, x);
        if (firstO == -1)
        {
            return 0;
        }
        return (lastO - firstO + 1);
    }
};