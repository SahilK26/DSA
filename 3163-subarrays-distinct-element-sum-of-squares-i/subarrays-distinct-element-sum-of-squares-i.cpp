
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        long long sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            vector<int> hash(101, 0);
            int cnt = 0;

            for(int j = i; j < nums.size(); j++) {
                if(hash[nums[j]] == 0) {
                    hash[nums[j]]++;
                    cnt++;
                }

                sum += 1LL * cnt * cnt;
            }
        }

        return sum;
    }
};
