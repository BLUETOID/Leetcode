
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int>matrixValue;
        int n = mat.size();
        int m = mat[0].size();
        if (n * m != r * c) return mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrixValue.push_back(mat[i][j]);
            }
        }
        int k=0;
        vector<vector<int>> result;
        for(int i=0;i<r;i++){
            vector<int>current;
            for(int j=0;j<c;j++){
                current.push_back(matrixValue[k++]);
            }
            result.push_back(current);
        }

        return result;
    }
};