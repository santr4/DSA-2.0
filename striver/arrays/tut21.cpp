// Maximum Score from Subarray Minimums

class Solution
{
public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr)
    {
        // Your code goes here
        int n = arr.size();
        int currSum = 0;
        int maxSum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            currSum = arr[i] + arr[i + 1];
            if (currSum > maxSum)
            {
                maxSum = max(maxSum, currSum);
            }
        }
        return maxSum;
    }
};