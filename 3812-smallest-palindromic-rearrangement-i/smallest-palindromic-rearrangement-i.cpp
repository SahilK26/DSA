class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length()==1) return s;
        vector<int>arr(26,0);

        for(auto it:s){
            arr[it-'a']++;
        }
        string st1,st2;
        char mid = 0;
        for(int i=0;i<26;i++){
            int temp = arr[i]/2;
            while(temp--){
                char ch=i+'a';
                st1.push_back(ch);
            }
            if(arr[i]%2)
            mid = char(i+'a');
        }

        for(int i=25;i>=0;i--){
            int temp = arr[i]/2;
            while(temp--){
                char ch=i+'a';
                st2.push_back(ch);
            }
        }
        if(mid) return st1+mid+st2;
        return st1+st2;
    }
};