class Solution {
   public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Your code goes here
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<bool> rowzero(rows,false);
        vector<bool> colzero(cols,false);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if(matrix[i][j] == 0){
                    rowzero[i] = true;
                    colzero[j] = true;
                }
            }
        }

        for(int i=0;i<rows;++i){
            if(rowzero[i])
            for (int j = 0; j < cols; j++) {
                    matrix[i][j] =0;
            }
         }

         for(int j=0;j<cols;++j){
            if(colzero[j]){
            for (int i = 0; i < rows; ++i) {
                    matrix[i][j] =0;
            }
            }
         }
         
    }
};