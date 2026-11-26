class Solution {
public:
    int hammingWeight(int num) {
            int count=0;

    // Number should be positive
    while (num > 0) {
        num &=(num-1);
        count++;
    }
    return count;
    }
};