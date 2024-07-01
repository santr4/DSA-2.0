// Allocate Books

int countStudents(vector<int> &arr, int maxSum)
{
    int students = 1;
    long long maximumSum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (maximumSum + arr[i] <= maxSum)
        {
            maximumSum += arr[i];
        }
        else
        {
            students++;
            maximumSum = arr[i];
        }
    }
    return students;
}

int findPages(vector<int> &arr, int n, int m)
{
    // Write your code here.
    if (m > n)
    {
        return -1;
    }
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int students = countStudents(arr, mid);
        if (students > m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        return low;
    }
}