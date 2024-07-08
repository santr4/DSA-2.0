// 3211. Generate Binary Strings Without Adjacent Zeros

class Solution
{
public:
    vector<string> ans;
    void f(int prev, string &str, int n)
    {
        if (str.length() == n)
        {
            ans.push_back(str);
            return;
        }
        str.push_back('1');
        f(1, str, n);
        str.pop_back();
        if (prev == 1)
        {
            str.push_back('0');
            f(0, str, n);
            str.pop_back();
        }
    }
    vector<string> validStrings(int n)
    {
        string a = "0", b = "1";
        ans.clear();
        f(0, a, n);
        f(1, b, n);
        return ans;
    }
};