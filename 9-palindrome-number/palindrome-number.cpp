class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        string s = to_string(x);
        int i = 0;

        while(i < s.length() / 2){
            if(s[i] != s[s.length() - 1 - i]) return false;
            i++;
        }
        return true;
    }
};