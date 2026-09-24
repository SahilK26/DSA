class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int cnt =0;
            while(num>0){
                int last = num%10;
                cnt +=last;
                num = num/10;
                }
            cout << cnt;
            if(cnt==i) return cnt;
        }
        return -1;
    }
};