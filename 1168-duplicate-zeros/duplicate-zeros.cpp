class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> nums(arr.size(), 0);
        int j = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                if (j < arr.size()) {
                    nums[j] = arr[i];
                    j++;
                }
            }
            else {
                if (j < arr.size()) {
                    nums[j] = 0;
                    j++;
                }

                if (j < arr.size()) {
                    nums[j] = 0;
                    j++;
                }
            }
        }

        arr = nums;
    }
};