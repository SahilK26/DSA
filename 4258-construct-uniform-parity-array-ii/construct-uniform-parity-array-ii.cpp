class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallestOdd = INT_MAX;
        for(auto it : nums1){
            if(it%2==1) smallestOdd = min(smallestOdd,it);
        }

        if(smallestOdd == INT_MAX) return true;
        for(auto it : nums1) {
            if(it%2==0 && it <=smallestOdd) return false;
        }
        return true;
        
    }
};