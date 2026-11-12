class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int dec=1;
        int maxi =0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                inc++;
                cout<<inc;
                // int maxi = max({maxi,inc,dec});
                dec=1;
            }
            else if(nums[i]<nums[i-1]){
                dec++;
                inc=1;
            }
            else{
                inc=1;
                dec=1;
            }
            maxi = max({maxi,inc,dec});
        }
        maxi = max({inc,dec,maxi});
        return maxi;
    }
};