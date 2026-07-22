class Solution {
public:
    int countDigits(int num) {
        int count =0;
        int number = num;
        while(number>0){
            int mod = number%10;
            if(num%mod==0) count++;

            number /=10;
        }
        return count;
    }
};