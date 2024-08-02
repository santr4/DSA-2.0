// 796. Rotate String

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int x = s.length();
        int y = goal.length();
        if (x != y)
        {
            return false;
        }
        s += s;
        if (s.find(goal) < s.size())
        {
            return true;
        }
        return false;
    }
};