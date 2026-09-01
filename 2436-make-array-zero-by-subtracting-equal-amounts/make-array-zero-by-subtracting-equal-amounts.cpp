class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int hash[101]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int cnt = 0;
        for(int i=1;i<101;i++){
            if(hash[i]) cnt++;
        }
        return cnt;
    }
};