// Armstrong Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int n = x;
    int k = to_string(x).length(); // nice way to calculate the length of the number.
    int sum = 0;
    while (n > 0)
    {
        sum += pow((n % 10), k);
        n = n / 10;
    }
    if (sum == x)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}