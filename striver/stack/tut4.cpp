// 735. Asteroid Collision

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        int n = asteroids.size();
        stack<int> st;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            bool exploded = false;
            while (!st.empty() && asteroids[i] < 0 && st.top() > 0)
            {
                if (st.top() < -1 * asteroids[i])
                {
                    st.pop();
                    continue;
                }
                else if (st.top() == -1 * asteroids[i])
                {
                    st.pop();
                }
                exploded = true;
                break;
            }
            if (!exploded)
            {
                st.push(asteroids[i]);
            }
        }
        while (!st.empty())
        {
            int x = st.top();
            st.pop();
            ans.push_back(x);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};