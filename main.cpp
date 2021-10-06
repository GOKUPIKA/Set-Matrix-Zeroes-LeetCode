class Solution {
public:
  
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1;
        int row=matrix.size();
        int col=matrix[0].size();
        
        for(int i=0;i<row;i++){
            if(matrix[i][0]==0){
                col0=0;
            }
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }                
            }
            if(col0==0){
                matrix[i][0]=0;
            }
        }
    }
  
};

/*
EXPLANATION OF THIS APPROACH:
1. First we consider the first row and first column in the matrix to store our zero(0) count.
2. Second, we make nested for loop to iterate over our given matrix.
3. While doing the iteration, if we find any zero(0) then we mark its first column and row starting as 0.
3. After our iteration complete, then we iterate again our matrix but this time is in reverse order or you can say in backwards.
4. In iteration we check that the pointer current value's first column and first value is 0 or not, if it is 0 then we marks the current value zero, else we do nothing.
5. After the the completion of this loop we will get the updated matrix, 
6. Hence, the matrix is pass by refernce that means we do not need to return anything, because changes has been made in original matrix


*/
