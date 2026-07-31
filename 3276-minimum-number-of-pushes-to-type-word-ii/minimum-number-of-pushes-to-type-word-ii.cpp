class Solution {
public:
    int minimumPushes(string word) {
        if(word.size()<=8) return word.size();

        vector<int> freq(26, 0);

        for(char ch : word){
            freq[ch - 'a']++;
        }
        sort(freq.begin(), freq.end(), greater<int>());
        int sum =0;
        for(int i=0;i<26;i++){
            if(freq[i]==0) break;
            if(i<8){
            sum +=freq[i]*1;
            }
            else if(i<16){
                sum +=freq[i]*2;
            }
            else if(i<24){
                sum +=freq[i]*3;
            }
            else{
                sum +=freq[i]*4;
            }
        }
        return sum;
    }
};