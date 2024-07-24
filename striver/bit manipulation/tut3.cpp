// K-th Bit is Set or Not

class Solution
{
public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        int x = (n >> k) & 1;
        if (x == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};