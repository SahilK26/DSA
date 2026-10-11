class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long ans=0;
        int i=1;
        int n=nums.size();
        while(i<=n){
            if(n%i==0){
                cout<< i;
                ans += nums[i-1]*nums[i-1];
            }
            i++;
        }
        return ans;
    }
};