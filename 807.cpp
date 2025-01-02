// 807. Max Increase to Keep City Skyline
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> maxrow;
        vector<int> maxcol;
        int m=0;
        int o=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                m=max(m,grid[i][j]);
                o=max(o,grid[j][i]);
            }
            maxrow.push_back(o);
            maxcol.push_back(m);
            m=0;
            o=0;
        }
        // for (int i:maxrow) cout<<i;
        int op=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                op+=(min(maxrow[i],maxcol[j])-grid[i][j]);
            }
        }
        return op;
    }
};