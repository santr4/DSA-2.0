// Count Digits

class Solution
{
public:
    int evenlyDivides(int N)
    {
        // code here
        int count = 0;
        int val = N;
        while (val > 0)
        {
            int x = val % 10;
            if (x != 0 && N % x == 0)
            {
                count++;
            }
            val = val / 10;
        }
        return count;
    }
};