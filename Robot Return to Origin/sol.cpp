class Solution {
public:
    bool judgeCircle(string moves) {
        int count=0;
        int sum=0;
        int i=0;
        while(moves[i]!='\0'){
            if(moves[i]=='U')
                count++;
            if(moves[i]=='D')
                count--;
            if(moves[i]=='R')
                sum--;
            if(moves[i]=='L')
                sum++;
            i++;
        }
        if(count==0 && sum==0)
            return true;
        return false;
            
    }
};