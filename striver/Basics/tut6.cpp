// Java Switch Case statement

class Solution
{
public:
    double switchCase(int choice, vector<double> &arr)
    {
        // code here
        switch (choice)
        {
        case 1:
        {
            double x = M_PI * arr[0] * arr[0];
            return x;
        }
        case 2:
        {
            double l = arr[0], b = arr[1];
            double area = l * b;
            return area;
        }
        default:
            return -1;
        }
    }
};
