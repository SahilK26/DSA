class Solution {
public:
    int minimizeSum(vector<int>& nums) {

//       largest - second largest
//       smallest - second smallest
//       or, second largest - second smallest
        sort(nums.begin(),nums.end());
        int n =nums.size();
        return min({abs((nums[n-1]-nums[2])),abs((nums[0]-nums[n-3])),abs((nums[n-2]-nums[1]))});

    }
};