class Solution {
public:
    bool checkPerfectNumber(int num) {
        int slice =0;
        for(int i=1;i<num;i++){
            if(num%i==0) slice +=i;
        }
        if(slice==num) return 1;
        return 0;
    }
};