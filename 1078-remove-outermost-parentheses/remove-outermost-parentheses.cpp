class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth =0;
        string st = "";
        for(auto ch : s){
            if (ch == '(') {
                if (depth > 0) st.push_back(ch);
                depth++;
            } else {
                depth--;
                if (depth > 0) st.push_back(ch);
            }
        }
        return st;
    }
};