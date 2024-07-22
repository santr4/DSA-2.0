// Bit Manipulation

class Solution
{
public:
    void bitManipulation(int num, int i)
    {
        // your code here
        int get_ith_bit = (num >> (i - 1)) & 1;
        int set_ith_bit = num | (1 << (i - 1));
        int clear_ith_bit = num & ~(1 << (i - 1));

        cout << get_ith_bit << " " << set_ith_bit << " " << clear_ith_bit;
    }
};