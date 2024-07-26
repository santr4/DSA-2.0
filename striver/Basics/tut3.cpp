// Search Query Auto Complete

class AutoCompleteSystem
{
public:
    map<string, int> mp;
    string cc = "";

    AutoCompleteSystem(vector<string> &sentences, vector<int> &times)
    {
        // write code for constructor
        for (int i = 0; i < sentences.size(); i++)
        {
            mp[sentences[i]] = times[i];
        }
    }

    static bool cmp(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second;
    }

    vector<string> input(char c)
    {
        // write code to return the top 3 suggestions when the current character in the
        // stream is c c == '#' means , the current query is complete and you may save
        // the entire query into historical data
        vector<string> three;
        vector<pair<string, int>> M;
        if (c == '#')
        {
            mp[cc]++;
            cc = "";
            three.clear();
            return three;
        }
        else
        {
            cc.push_back(c);
            for (auto it : mp)
            {
                if (it.first.find(cc) == 0)
                {
                    M.push_back(it);
                }
            }
            sort(M.begin(), M.end(), cmp);
            for (auto &it : M)
            {
                if (three.size() < 3)
                {
                    three.push_back(it.first);
                }
                else
                {
                    break;
                }
            }
        }
        return three;
    }
};

/**
 * Your AutoCompleteSystem object will be instantiated and called as such:
 * AutoCompleteSystem* obj = new AutoCompleteSystem(sentences, times);
 * vector<string> param_1 = obj->input(c);
 */