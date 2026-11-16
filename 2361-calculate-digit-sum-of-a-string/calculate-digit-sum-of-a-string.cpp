class Solution {
public:
    string digitSum(string s, int k) {
        string sum ="";
        string st =s;
        while(st.size()>k){
            int cnt=0;
            int tempSum = 0;
            for(int i=0;i<st.size();i++){
                tempSum +=st[i]-'0';
                cnt++;
                if(cnt==k){
                    sum+=to_string(tempSum);
                    cnt=0;
                    tempSum=0;
                }
            }
            if(cnt!=0){
                sum+=to_string(tempSum);
            }
            st=sum;
            sum="";
        }
        return st;
    }
};