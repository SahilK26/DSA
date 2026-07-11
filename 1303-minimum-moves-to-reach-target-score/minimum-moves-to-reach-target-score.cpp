class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int cnt=0;
        while(target>1){
            if(target%2==0 && maxDoubles>0){
                target = target/2;
                maxDoubles--;
                cnt++;
            }
            else if(maxDoubles==0) return target+cnt-1;
            else {
                target--;
                cnt++;
            }
        }
        return cnt;
    }
};