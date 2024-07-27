// Nth Fibonacci Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        int prev_1 = 1;
        int prev_2 = 1;
        for (int i = 3; i <= n; i++)
        {
            int sum = prev_1 + prev_2;
            prev_1 = prev_2;
            prev_2 = sum;
        }
        cout << prev_2 << endl;
    }
}