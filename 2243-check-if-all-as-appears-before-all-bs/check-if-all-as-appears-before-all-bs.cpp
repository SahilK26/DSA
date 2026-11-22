class Solution {
public:
    bool checkString(string s) {
        bool isB = false;
        for(auto it : s){
            if(isB && it=='a') return false;
            if(it=='b') isB = true;
        }
        return true;
    }
};