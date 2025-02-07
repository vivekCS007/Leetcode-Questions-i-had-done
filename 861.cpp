// 861. Score After Flipping Matrix

class Solution {
public:
    int bintodec(vector<int>& b) {
        int decimalValue = 0;
        int n = b.size();
        for (int i = 0; i < n; ++i) {
            decimalValue += b[i] * (1 << (n - 1 - i));
        }
        return decimalValue;
    }

    int matrixScore(vector<vector<int>>& grid) {
        for (auto& i : grid) {
            if (i[0] == 0) {
                for (int j = 0; j < i.size(); ++j) {
                    if (i[j] == 0)
                        i[j] = 1;
                    else
                        i[j] = 0;
                }
            }
        }
        for (int i = 1; i < grid[0].size(); i++) {
            int co = 0;
            int cz = 0;
            for (int j = 0; j < grid.size(); j++) {
                if (grid[j][i] != 0)
                    co++;
                else
                    cz++;
            }
            if (cz > co) {
                for (int j = 0; j < grid.size(); j++) {
                    if (grid[j][i] == 0)
                        grid[j][i] = 1;
                    else
                        grid[j][i] = 0;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < grid.size(); ++i) {
            ans += bintodec(grid[i]);
        }
        return ans;
    }
};