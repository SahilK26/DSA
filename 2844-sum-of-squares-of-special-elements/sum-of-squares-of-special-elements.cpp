class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long ans=0;
        int i=1;
        int n=nums.size();
        while(i<=n/2){
            if(n%i==0){
                ans += nums[i-1]*nums[i-1];
            }
            i++;
        }
        ans +=nums[n-1]*nums[n-1];
        return ans;
    }
};