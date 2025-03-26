// 120. Triangle

class Solution {
    public:
        int solve(vector<vector<int>>& triangle,int i,int n,int ans,int j,vector<vector<int>>& t){
            if(i==n) return t[i][j]=ans;
            if(t[i][j]!=INT_MAX) return t[i][j];
            return t[i][j]=ans=min(triangle[i][j]+solve(triangle,i+1,n,ans,j,t),triangle[i][j]+solve(triangle,i+1,n,ans,j+1,t));
        }
        int minimumTotal(vector<vector<int>>& triangle) {
            int n=triangle.size();
            int a=0;
            int ans=0;
            vector<vector<int>> t(n+1,vector<int>(n+1,INT_MAX));
            return solve(triangle,0,n,ans,0,t);
        }
    };