// 1239. Maximum Length of a Concatenated String with Unique Characters

class Solution
{
public:
    int maxLength(vector<string> &arr)
    {
        return solve(arr, 0, "");
    }

private:
    int solve(vector<string> &arr, int i, string res)
    {
        unordered_set<char> resSet(res.begin(), res.end());
        if (res.size() != resSet.size())
        {
            return 0;
        }
        if (i >= arr.size())
        {
            return res.size();
        }
        int best = res.size();
        best = max(best, solve(arr, i + 1, res + arr[i]));
        best = max(best, solve(arr, i + 1, res));
        return best;
    }
};