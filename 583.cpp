// 583. Delete Operation for Two Strings

class Solution {
    public:
        int minDistance(string s1, string s2) {
            int n=s1.length();
            int m=s2.length();
            vector<vector<int>> t(n+1,vector<int>(m+1,0));
            for(int i=1;i<n+1;i++){
                for(int j=1;j<m+1;j++){
                    if(s1[i-1]==s2[j-1]) t[i][j]=1+t[i-1][j-1];
                    else t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
            return n+m-2*t[n][m];
        }
    };