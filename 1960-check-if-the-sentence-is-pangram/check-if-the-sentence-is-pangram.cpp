class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>hash(26,0);
        for(auto it :sentence ){
            hash[it-'a']++;
        }
        for(auto it : hash){
            if(!it) return 0;
        }
        return 1;
    }
};