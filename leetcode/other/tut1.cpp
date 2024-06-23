// to count the special characters in the string

#include <bits/stdc++.h>
using namespace std;

int countSpecial(string s)
{
    int count = 0;
    int y = s.size();
    for (int i = 0; i < y; i++)
    {
        if (!isalnum(s[i]) && s[i] != ' ')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s = "santra %5^";
    int x = countSpecial(s);
    cout << "the count of special characters: " << x << endl;
    return 0;
}