506. Relative Ranks

    class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        int n = score.size();
        vector<string> ranks(n);

        // Pairing scores with their original indices
        vector<pair<int, int>> indexedScore;
        for (int i = 0; i < n; ++i)
        {
            indexedScore.push_back({score[i], i});
        }

        // Sorting the scores in descending order
        sort(indexedScore.begin(), indexedScore.end(), greater<pair<int, int>>());

        // Assigning ranks
        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                ranks[indexedScore[i].second] = "Gold Medal";
            }
            else if (i == 1)
            {
                ranks[indexedScore[i].second] = "Silver Medal";
            }
            else if (i == 2)
            {
                ranks[indexedScore[i].second] = "Bronze Medal";
            }
            else
            {
                ranks[indexedScore[i].second] = to_string(i + 1);
            }
        }

        return ranks;
    }
};