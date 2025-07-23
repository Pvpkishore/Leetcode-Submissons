// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int m = matrix.size();
//         int n = matrix[0].size();
//         int total_elements = m * n;

//         int startingRow = 0;
//         int endingcol = n - 1;
//         int endingRow = m - 1;
//         int startingcol = 0;

//         int count = 0;

//         while (count < total_elements) {

//             for (int i = startingcol; i <= endingcol && count < total_elements;
//                  i++) {
//                 ans.push_back(matrix[startingRow][i]);
//                 count++;
//             }
//             startingRow++;

//             for (int i = startingRow; i < endingRow && count < total_elements;
//                  i++) {
//                 ans.push_back(matrix[i][endingcol]);
//                 count++;
//             }

//             endingcol--;
//             for (int i = endingcol; i >= startingcol && count < total_elements;
//                  i--) {

//                 ans.push_back(matrix[endingRow][i]);
//                 count++;
//             }
//             endingRow--;
//             for(int i =endingRow;i>=startingRow && count <total_elements;i--){
//                 ans.push_back(matrix[i][startingcol]);
//                 count++;
//             }
//             startingcol++;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        if (matrix.empty()) {
            return result; // Return an empty vector for an empty matrix
        }

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // Traverse from left to right across the top row
            for (int i = left; i <= right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++; // Move the top boundary down

            // Traverse from top to bottom along the right column
            for (int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--; // Move the right boundary left

            // Traverse from right to left across the bottom row (if needed)
            if (top <= bottom) {
                 for (int i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                 }
                bottom--; // Move the bottom boundary up
            }

            // Traverse from bottom to top along the left column (if needed)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++; // Move the left boundary right
            }
        }

        return result;
    }
};
