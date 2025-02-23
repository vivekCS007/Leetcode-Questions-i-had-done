// 2352. Equal Row and Column Pairs

class Solution {
    public:
    vector<vector<int>> t(const vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
    
        size_t rows = matrix.size();
        size_t cols = matrix[0].size();
        vector<vector<int>> transposed(cols, vector<int>(rows));
    
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                transposed[j][i] = matrix[i][j]; // Swap row and column indices
            }
        }
    
        return transposed;
    }
    
        int equalPairs(vector<vector<int>>& grid) {
            vector<vector<int>> a=t(grid);
            int ans=0;
            for(auto i:grid){
                for (auto j:a) if (i==j) ans++;
            }
            return ans;
            
    
        }
    };