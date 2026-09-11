class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int cnt =0;
        int n = digits.size();
        set<int> s;
        for(int i=0;i<n;i++){
            if(digits[i] != 0){
                for(int k=0;k<n;k++){
                    if(i==k) continue;
                    for(int j=0;j<n;j++){
                        if(j==i || j==k) continue;
                        long long num = (digits[i]*100 + digits[k]*10+digits[j]); 
                        if(num%2==0) s.insert(num);
                    }
                }
            }
            
        }
        return s.size();
    }
};