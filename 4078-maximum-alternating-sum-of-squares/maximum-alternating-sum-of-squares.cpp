class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) > abs(b);
        });
        int i=0;
        int j=nums.size()-1;
        bool even= true;
        long long sum=0;
        while(i<=j){
            if(even){
                sum+=nums[i]*nums[i];
                even=false;
                i++;
            }
            else{
                sum-=nums[j]*nums[j];
                j--;
                even=true;
            }
        }
        
        return sum;
    }
};