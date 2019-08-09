class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int length=A.size();
        int temp;
        for(int i=0;i<length;i++){
            if(A[i]%2!=0){
                temp=A[i];
                A[i]=A[length-1];
                A[length-1]=temp;
                length--;
                i--;                
            }
        }
        return A;
    }
};