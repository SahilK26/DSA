class Solution {
public:
    int minChanges(string s) {
        bool odd = true;
        int cnt = 0;
        for(int i=1;i<s.size();i++){
            if(odd){
                if(s[i] != s[i-1]){
                    cnt++;
                }
                odd=false;
            }
            else odd= true;
        }
        return cnt;
    }
};