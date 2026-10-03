class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        long long sum = 0;
        for(auto it : nums) sum +=it;
        int n = nums.size();
        long long leftSum = 0;
        for(int i=0;i<n;i++){
            sum -=nums[i];
            if(leftSum==sum) return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};