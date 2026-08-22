class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum =0;
        long long product = 1;
        int temp = n;
        while(temp>0){
            int last = temp%10;
            sum +=last;
            product *=last;
            temp /=10;
        }
        // long long add = sum + product;
        return n%(sum + product)==0;
    }
};