// Find Kth Rotation

class Solution
{
public:
    int findKRotation(vector<int> &arr)
    {
        // Code Here
        int n = arr.size();
        int low = 0, high = n - 1;
        int ind = -1;
        int ans = INT_MAX;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[low] <= arr[high])
            {
                if (arr[low] < ans)
                {
                    ind = low;
                    ans = arr[low];
                }
                break;
            }
            if (arr[low] <= arr[mid])
            {
                if (arr[low] < ans)
                {
                    ind = low;
                    ans = arr[low];
                }
                low = mid + 1;
            }
            else
            {
                if (arr[mid] < ans)
                {
                    ind = mid;
                    ans = arr[mid];
                }
                high = mid - 1;
            }
        }
        return ind;
    }
};