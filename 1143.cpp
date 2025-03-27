// 1143. Longest Common Subsequence

class Solution {
    public:
        int t[1001][1001];
        int solve(int n,int m,string &s1,string &s2){
            if(n==0 || m==0) return t[n][m]=0;
            if(t[n][m]!=-1) return t[n][m];
            if(s1[n-1]==s2[m-1]) return t[n][m]=1+solve(n-1,m-1,s1,s2);
            if(t[n][m]!=-1) return t[n][m];
            return t[n][m]=max(solve(n-1,m,s1,s2),solve(n,m-1,s1,s2));
        }
        int longestCommonSubsequence(string s1, string s2) {
            int n=s1.length();
            int m=s2.length();
            for (int i=0;i<n+1;i++){
                for (int j=0;j<m+1;j++){
                    if(i==0 || j==0) t[i][j]=0;
                    else t[i][j]=-1;
                }
            }
            return solve(n,m,s1,s2);
            
        }
    };