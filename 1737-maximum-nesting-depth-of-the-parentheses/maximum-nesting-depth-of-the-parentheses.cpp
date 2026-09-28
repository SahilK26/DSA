class Solution {
public:
    int maxDepth(string s) {
        int cnt =0;
        int maxi =0;
        for(auto it : s){
            if(it=='(') cnt++;
            else if(it==')') cnt--;
            maxi = max(cnt,maxi);
        }
        return maxi;
    }
};