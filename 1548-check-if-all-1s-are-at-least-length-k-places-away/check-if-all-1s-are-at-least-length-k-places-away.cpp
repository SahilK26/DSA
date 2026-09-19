class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int cnt = k;  // first 1 ke liye valid maan lo

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                if(cnt < k)
                    return false;

                cnt = 0;
            }
            else {
                cnt++;
            }
        }

        return true;
    }
};