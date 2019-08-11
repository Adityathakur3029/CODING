class Solution {
public:
    string removeOuterParentheses(string S) {
        int i=0,open=0,close=0;
        while(S[i]!='\0'){
            if(open==0 && close==0){
                open++;
                S.erase(S.begin()+i);
            }
            if(S[i]=='(')
                open++;
            else
                close++;
            if(open==close){
                S.erase(S.begin()+i);
                open=0;
                close=0;
                i--;
            }
            
            i++;
        }
        return S;
    }
};