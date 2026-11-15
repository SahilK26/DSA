class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;

        long long even = 1, odd = 0;
        long long sum = 0, cnt = 0;

        for (int it : arr) {
            sum += it;

            if (sum % 2 != 0) {
                cnt = (cnt + even) % MOD;
                odd++;
            }
            else {
                cnt = (cnt + odd) % MOD;
                even++;
            }
        }

        return cnt;
    }
};