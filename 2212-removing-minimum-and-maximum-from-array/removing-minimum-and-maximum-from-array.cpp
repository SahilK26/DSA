class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX, maxi = INT_MIN;
        int ind1 = 0, ind2 = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                ind1 = i;
            }

            if (nums[i] < mini) {
                mini = nums[i];
                ind2 = i;
            }
        }

        int beg = max(ind1, ind2) + 1;
        int end = n - min(ind1, ind2);
        
        int mixed = min(ind1 + 1 + n - ind2,
                        ind2 + 1 + n - ind1);

        return min({beg, end, mixed});
    }
};