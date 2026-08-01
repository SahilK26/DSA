class Solution {
public:
    string winningPlayer(int x, int y) {

        bool AliceTurn = true;
        int i=x;
        int j=y;
        while(i>0 && j>=4){
            if(i>=1 && j>=4){
                i -= 1;
                j -=4;
            }
            else break;
            cout << i  << j;
            AliceTurn = !AliceTurn;
        }
        if(!AliceTurn) return "Alice";
        return "Bob";
    }
};