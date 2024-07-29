// reverse a array

// #include <bits/stdc++.h>
// using namespace std;

// void reverseV(vector<int> &v, int l, int r)
// {
//     while (l < r)
//     {
//         swap(v[l], v[r]);
//         l++;
//         r--;
//     }
// }

// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     int l = v.size();
//     for (int i = 0; i < l; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     reverseV(v, 0, l - 1);
//     for (int i = 0; i < l; i++)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
    int l = v.size();
    for (int i = 0; i < l; i++)
    {
        cout << v[i] << " ";
    }
}

void reverseV(vector<int> &v, int start, int end)
{
    if (start < end)
    {
        swap(v[start], v[end]);
        reverseV(v, start + 1, end - 1);
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    reverseV(v, 0, n - 1);
    printV(v);
    return 0;
}