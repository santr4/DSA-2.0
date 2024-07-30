// Longest Sub-Array with Sum K

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function
        unordered_map<int, int> mp;
        int sum = 0;
        int maxLen = 0;
        for (int i = 0; i < N; i++)
        {
            sum += A[i];
            if (sum == K)
            {
                maxLen = max(maxLen, i + 1);
            }
            int rem = sum - K;
            if (mp.find(rem) != mp.end())
            {
                maxLen = max(maxLen, i - mp[rem]);
            }
            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        return maxLen;
    }
};

// the below solution is only for arrays with zeroes and positive integers.

// class Solution{
//     public:
//     int lenOfLongSubarr(int A[],  int N, int K)
//     {
//         // Complete the function
//         int left = 0;
//         int right = 0;
//         int sum = A[0];
//         int maxLen = 0;
//         while(right < N){
//             // to reduce the window size when sum exceeds K
//             while(left <= right && sum > K){
//                 sum -= A[left];
//                 left++;
//             }
//             if(sum == K){
//                 maxLen = max(maxLen, right - left + 1);
//             }
//             right++;
//             if(right < N){
//                 sum += A[right];
//             }
//         }
//         return maxLen;
//     }

// };