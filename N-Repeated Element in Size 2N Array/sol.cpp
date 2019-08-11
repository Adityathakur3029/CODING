class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int ele,flag=0;
        int length=A.size();
        int i,j;
        for(i=0;i<length/2+2;i++){
            for(j=i+1;j<length/2+2;j++){
                if(A[i]==A[j]){
                    ele=A[j];
                    flag=1;
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
                break;
            
        }
        return ele;
    }
};