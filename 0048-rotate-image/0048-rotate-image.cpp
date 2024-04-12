#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        GOAT
        vector<int> row;
        vector<vector<int>> copy;
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = matrix.size()-1; j >=0 ; --j) {
                row.push_back(matrix[j][i]);
            }
            copy.push_back(row);
            row.clear();
        }
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix.size(); ++j) {
                matrix[i][j]=copy[i][j];
            }
        }
    }
};