// Binary String

#include <bits/stdc++.h>
using namespace std;

int operationsBinaryString(char *str)
{
    if (str == nullptr)
    {
        return -1;
    }
    int res = *str - '0';
    str++;
    while (*str != '\0')
    {
        char p = *str;
        str++;
        if (p == 'A')
        {
            res &= (*str - '0');
        }
        else if (p == 'B')
        {
            res |= (*str - '0');
        }
        else if (p == 'C')
        {
            res ^= (*str - '0');
        }
        str++;
    }
    return res;
}

int main()
{
    string s;
    getline(cin, s);
    char *str = &s[0];
    int out = operationsBinaryString(str);
    cout << out << endl;
    return 0;
}