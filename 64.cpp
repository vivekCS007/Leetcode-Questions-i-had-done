// 64. Minimum Path Sum

class Solution {/
    public:
        int solve(vector<vector<int>>& grid,int i,int n,int j,vector<vector<int>>& t,int m){
            if(i==n-1 && j==m-1) return grid[i][j];
            if(t[i][j]!=-1) return t[i][j];
            if(i==n-1) return t[i][j]=grid[i][j]+solve(grid,i,n,j+1,t,m);
            if(j==m-1) return t[i][j]=grid[i][j]+solve(grid,i+1,n,j,t,m);
            return t[i][j]=min(grid[i][j]+solve(grid,i+1,n,j,t,m),grid[i][j]+solve(grid,i,n,j+1,t,m));
        }
        int minPathSum(vector<vector<int>>& grid) {
            int n=grid.size();
            int a=0;
            int m=grid[0].size();
            // int ans=0;
            vector<vector<int>> t(n+1,vector<int>(m+1,-1));
            return solve(grid,0,n,0,t,m);
            
        }
    };