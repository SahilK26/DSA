class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=0;
        for(auto it : nums){
            if(it>maxi){
                maxi=it;
            }
        }
        int cnt=0;
        for(auto it : nums){
            cnt += maxi-it;
        }
        return cnt;
    }
};