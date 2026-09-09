class Solution {
public:
    long long countCommas(long long n) {
        long long cnt = 0;
        long long p = 1000;

        while (p <= n) {
            cnt += n - p + 1;
            
            if (p > n / 1000)
                break;

            p *= 1000;
        }

        return cnt;
    }
};