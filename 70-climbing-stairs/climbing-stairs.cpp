class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int one_back=2;
        int two_back =1;
       for(int i=2;i<n;i++){
            int next = one_back + two_back;
            two_back = one_back;
            one_back = next;
       }

       return one_back;
    }
};