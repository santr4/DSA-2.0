// 2582. Pass the Pillow

class Solution
{
public:
    int passThePillow(int n, int time)
    {
        int count = 1;
        int direction = 1;
        while (time > 0)
        {
            count += direction;
            if (count == n || count == 1)
            {
                direction = -1 * direction;
            }
            time--;
        }
        return count;
    }
};