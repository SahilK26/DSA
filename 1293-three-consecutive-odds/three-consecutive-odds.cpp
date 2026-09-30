class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool one=false,two=false;
        for(auto it : arr){
            if(it%2!=0 && one && two ) return true; 
            else if (it%2!=0 && one) two = true;
            else if(it%2!=0){
                one = true;
                two =false;
            } 
            else{
                one = false;
                two=false;
            }
        }
        return false;
    }
};