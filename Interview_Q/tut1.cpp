// print words which occurred more than once in the text.

#include <bits/stdc++.h>
using namespace std;

vector<string> f(string s)
{
    vector<string> v;
    string word;
    stringstream iss(s); // stringstream
    while (iss >> word)
    {
        v.push_back(word);
    }
    map<string, int> mp;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    vector<string> v1;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > 1)
        {
            v1.push_back(it->first);
        }
    }
    return v1;
}

int main()
{
    string s = "cat latter matter in matter cat .";
    vector<string> ans = f(s);
    int x = ans.size();
    for (int i = 0; i < x; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}