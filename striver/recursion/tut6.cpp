// ** generate binary strings without consecutive 1's using recursion.

#include <iostream>
using namespace std;

void generateBinaryStrings(int l, string s)
{
    if (s.size() == l)
    {
        cout << s << endl;
        return;
    }
    generateBinaryStrings(l, s + '0');
    if (s.empty() || s.back() != '1')
    {
        generateBinaryStrings(l, s + '1');
    }
}

int main()
{
    int length;
    cout << "enter the length of the binary strings" << endl;
    cin >> length;

    cout << "binary strings without consecutive 1's" << endl;
    generateBinaryStrings(length, "");
    return 0;
}