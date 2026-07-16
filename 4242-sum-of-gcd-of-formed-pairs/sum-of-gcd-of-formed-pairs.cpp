class Solution {
public:
    long long gcd(long long a, long long b) {
        while (b) {
            long long t = b;
            b = a % b;
            a = t;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        vector<long long >prefixGcd(nums.size());
        prefixGcd[0]=nums[0];
        long long mx = nums[0];
        for(long long i=1;i<nums.size();i++){
            // long long m =max(nums[i],nums[i-1]);
            // prefixGcd[i]=gcd(nums[i],m);
            mx = max(mx, (long long)nums[i]);
            prefixGcd[i] = gcd(nums[i], mx);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int i=0;
        int j=nums.size()-1;
        long long sumGcd=0;
        while(i<j){
            if(i==j)  break;
            sumGcd+=gcd(prefixGcd[i++],prefixGcd[j--]);

        }
        return sumGcd;
    }
};