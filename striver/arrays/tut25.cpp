// Array Leaders

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int n, int arr[])
    {
        // Code here
        vector<int> ans;
        int max = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] >= max)
            {
                ans.push_back(arr[i]);
                max = arr[i];
            }
        }
        int m = ans.size();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};