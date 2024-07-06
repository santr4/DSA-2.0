#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << "currently the string is: " << endl;
        cout << s << endl;
        remove(s.begin(), s.end(), ' ');
        cout << "after using remove() in string" << endl;
        cout << s << endl;
    }
    return 0;
}