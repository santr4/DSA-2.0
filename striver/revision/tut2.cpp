// ceaser cipher - hackerrank

string caesarCipher(string s, int k)
{
    string str = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (isalpha(c))
        {
            char base;
            if (isupper(c))
            {
                base = 'A';
            }
            else
            {
                base = 'a';
            }
            c = (c - base + k) % 26 + base;
        }
        str += c;
    }
    return str;
}