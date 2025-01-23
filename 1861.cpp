// 1861. Rotating the Box
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<char>> a(m,vector<char>(n));
        for (int i = 0; i < n; i++) {
            int l = 0;
            int r = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == '#') {
                    r++;
                } else if (mat[i][j] == '*') {
                    l = r + 1;
                    r++;
                } else {
                    swap(mat[i][l], mat[i][r]);
                    l++;
                    r++;
                }
            }
        }
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j) {
                a[j][n-1-i]=mat[i][j];
            }
        }
        return a;
    }
};