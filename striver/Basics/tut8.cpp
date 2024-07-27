// Pass by Reference and Value

class Solution
{
public:
    vector<int> passedBy(int a, int &b)
    {
        // code here
        vector<int> ans;
        a += 1;
        b += 2;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};