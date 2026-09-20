class Solution {
public:
    int reverseDegree(string s) {
        long long sum =0;
        for(int i=0;i<s.size();i++){
            int index = s[i]-'a'+1;
            sum += (27-index)*(i+1);
        }
        return sum;
    }
};