class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        for(auto it : accounts){
            int sum =0;
            for(int i=0;i<it.size();i++){
                sum+=it[i];
            }
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};