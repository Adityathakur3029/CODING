class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int i,j,temp;
        int length=A[i].size();
        for(i=0;i<A.size();i++){
            for(j=0;j<A[i].size()/2;j++){
                temp=A[i][j];
                A[i][j]=A[i][length-1-j];
                A[i][length-1-j]=temp;
            }
            for(j=0;j<A.size();j++){
                if(A[i][j]==0)
                    A[i][j]=1;
                else
                    A[i][j]=0;
            }
        }
        return A;
        
    }
};