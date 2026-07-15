class Solution {
public:
    long long findGCD(long long odd,long long even){
        long long GCD=1;
        for(int i=min(odd,even);i>1;i--){
            if(odd%i==0 && even%i==0) {
                return i;
            }
        }
        return GCD;
    }
    int gcdOfOddEvenSums(int n) {
        long odd=1;
        long long sumOdd=0;
        long even=2;
        long long sumEven=0;
        for(int i=1;i<=n;i++){
            odd+=2;
            even+=2;
            sumOdd +=odd;
            sumEven +=even;
        }
        cout<< sumOdd;
        cout<< sumEven;
        // cout <<  findGCD(sumOdd,sumEven);
        return findGCD(sumOdd,sumEven);
    }
};