class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum = INT_MAX;

        for(int i = 0; i < nums.size(); i++) {
            int cnt = 0;
            int temp = 0;

            for(int j = i; j < nums.size(); j++) {
                temp += nums[j];
                cnt++;

                if(cnt >= l && cnt <= r) {
                    if(temp > 0)
                        sum = min(sum, temp);
                }

                if(cnt > r) break;
            }
        }

        return sum == INT_MAX ? -1 : sum;
    }
};