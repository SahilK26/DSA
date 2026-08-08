class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>hash(26,0);
        for(auto it:magazine){
            hash[it-'a']++;
        }
        for(auto it:ransomNote){
            hash[it-'a']--;
        }
        for(auto it: hash){
            if(it<0) return false;
        }
        return true;
    }
};