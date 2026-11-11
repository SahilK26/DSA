
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long types = 1LL * cost1 * need1 + 1LL * cost2 * need2;

        long long other = 1LL * costBoth * max(need1, need2);

        long long mn = min(need1, need2);

        long long mixed = 1LL * costBoth * mn
                        + 1LL * cost1 * (need1 - mn)
                        + 1LL * cost2 * (need2 - mn);

        return min({types, other, mixed});
    }
};
