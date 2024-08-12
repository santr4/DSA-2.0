// Accenture question 1

#include <bits/stdc++.h>
using namespace std;

void stand_dev(vector<int> &v)
{
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    double A = double(sum) / double(n);
    double qty = 0.0;
    for (int i = 0; i < n; i++)
    {
        qty += pow(double(v[i] - A), 2);
    }
    qty = qty / n;
    cout << sqrt(qty) << endl;
}

int main()
{
    vector<int> v = {1, 3, 2, 7, 6, 4};
    stand_dev(v);
    return 0;
}