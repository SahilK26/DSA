class Solution {
public:
    long long digitProduct(int x) {
        long long p = 1;
        while (x > 0) {
            p *= (x % 10);
            x /= 10;
        }
        return p;
    }

    int smallestNumber(int n, int t) {
        while (true) {
            if (digitProduct(n) % t == 0)
                return n;
            n++;
        }
    }
};