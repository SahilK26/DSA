class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() !=goal.size()) return false;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size()-1;j++){
                    swap(s[j],s[j+1]);
            }
            if(s==goal) return true;
        }
        return false;
    }
};