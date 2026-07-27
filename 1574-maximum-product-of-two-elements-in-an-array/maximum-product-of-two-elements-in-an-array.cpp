class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=0;
        int maxi2=0;
        for(auto it: nums){
            if(it>maxi){
                maxi2=maxi;
                maxi=it;
            }
            else if(it>maxi2){
                maxi2=it;
            }
        }
        cout<< (maxi-1)*(maxi2-1);
        return (maxi-1)*(maxi2-1);
    }
};