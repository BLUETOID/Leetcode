
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int matrixSum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j)
                    matrixSum += mat[i][j];
                else if (i + j == n - 1)
                    matrixSum += mat[i][j];
            }
        }

        return matrixSum;
    }
};