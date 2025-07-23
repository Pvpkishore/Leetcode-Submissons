class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         
         vector<vector<int>> Pascaltriangle;

         for(int i=0;i<numRows;i++){
             
              vector<int> row(i+1,1);
              
              for(int j=1;j<i;j++){
                  row[j] = Pascaltriangle[i-1][j-1] + Pascaltriangle[i-1][j];
              }

              Pascaltriangle.push_back(row);
         }

         return  Pascaltriangle;
    }
};