// 151. Reverse Words in a String

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<char> st;
        int n = s.size();
        vector<string> v;
        for (int i = n - 1; i >= 0; --i)
        {
            string m;
            if (s[i] == ' ')
            {
                if (st.empty() == true)
                {
                    continue;
                }
                else
                {
                    while (!st.empty())
                    {
                        char c = st.top();
                        st.pop();
                        m += c;
                    }
                    v.push_back(m);
                    m = "";
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        string l;
        if (st.empty() == false)
        {
            while (!st.empty())
            {
                char c = st.top();
                st.pop();
                l += c;
            }
            v.push_back(l);
        }
        string k;
        int z = v.size();
        for (int i = 0; i < z; i++)
        {
            k = k + v[i];
            if (i < z - 1)
            {
                k = k + " ";
            }
        }
        return k;
    }
};