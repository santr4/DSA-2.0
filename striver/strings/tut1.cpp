// 796. Rotate String

class Solution
{
public:
    bool solve(string &s, string &goal)
    {
        if (s.size() > goal.size() || s.size() < goal.size())
        {
            return false;
        }
        s += s;
        if (s.find(goal) < s.size())
        {
            // cout<<s.find(goal)<<endl;
            return true;
        }
        return false;
    }

    bool rotateString(string s, string goal)
    {
        return solve(s, goal);
    }
};