class Solution {
public:
    int gcd(int  a,int  b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
            if(nums[i]<smallest){
                smallest = nums[i];
            }
        }
        return gcd(largest,smallest);
    }
};