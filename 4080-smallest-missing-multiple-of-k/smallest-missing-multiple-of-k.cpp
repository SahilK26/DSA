class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>hash(100+1);
        long long largest = 0;
        for(auto it : nums){
            hash[it]++;
            if(largest<it) largest = it;
        }
        for(int i=1;i<hash.size();i++){
            if(hash[i]==0 && i%k==0) return i;
        }
        largest = int(largest/k) + 1;
        return k*largest;
    }
};