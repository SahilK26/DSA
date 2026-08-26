class Solution {
public:
    char findTheDifference(string s, string t) {
        long long ascii1=0;
        long long ascii2=0;
        for(auto it : s){
            ascii1 += it-'a';
        }
        for(auto it:t){
            ascii2 +=it-'a';
        }
        return char(abs(ascii1-ascii2)+'a');
    }
};