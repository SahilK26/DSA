class Solution {
public:
    int secondHighest(string s) {
        int first = -1;
        int sec =-1;
        for(auto it: s){
            int ch = it;
            if(ch>47 && ch<=57 && ch>first){
                sec = first;
                first = it;
            }
            else if(ch>47 && ch<=57 && ch>sec && ch<first){
                sec = it;
            }
        }
        return (sec==-1)? sec : (sec-'0');
    }
};