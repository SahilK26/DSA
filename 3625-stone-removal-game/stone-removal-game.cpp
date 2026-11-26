class Solution {
public:
    bool canAliceWin(int n) {
      bool alice = true;
      for(int i=10;i>0;i--){
        n=n-i;
        if(n<0){
            return !alice;
        }
        alice = !alice;
      }
      return !alice;
    }
};