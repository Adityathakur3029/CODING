class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count =0;
        int i=0;
        while(S[i]!='\0'){
            int j=0;
            while(J[j]!='\0'){
                if(S[i]==J[j])
                    count++;
                j++;
            }
            i++;
        }
        return count;
        
    }
};