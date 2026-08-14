class Solution {
public:
    int maximumLengthSubstring(string s) {
        int length = s.size();
        int start = 0,end=0;
        map<char,int>charFreq;
        int maxL=0;
        while(end<length){
            charFreq[s[end]]++;
            while(charFreq[s[end]]>2){
                charFreq[s[start]]--;
                start++;
            }
            maxL = max(maxL,end-start+1);
            end++;
        }
        return maxL;
    }
};