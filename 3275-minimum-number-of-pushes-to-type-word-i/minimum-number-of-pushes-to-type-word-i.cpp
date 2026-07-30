class Solution {
public:
    int minimumPushes(string word) {
        int mini = 0;
        int cnt = 0;

        for(int i = 0; i < word.size(); i++) {
            if(cnt < 8) {
                mini += 1;
            }
            else if(cnt < 16) {
                mini += 2;
            }
            else if(cnt < 24) {
                mini += 3;
            }
            else {
                mini += 4;
            }
            cnt++;
        }

        return mini;
    }
};