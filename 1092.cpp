// 1092. Shortest Common Supersequence

class Solution {
    public:
        string shortestCommonSupersequence(string s1, string s2) {
            int n=s1.length();
            int m=s2.length();
            vector<vector<int>> t(n+1,vector<int>(m+1,0));
            for(int i=1;i<n+1;i++){
                for(int j=1;j<m+1;j++){
                    if(s1[i-1]==s2[j-1]) t[i][j]=1+t[i-1][j-1];
                    else t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
            string ans="";
            int i=n,j=m;
            while(i>0 && j>0){
                if(s1[i-1]==s2[j-1]){
                    ans+=s1[i-1];
                    i--;
                    j--;
                }
                else{
                    if(t[i-1][j]>t[i][j-1]){
                        ans+=s1[i-1];
                        i--;
                    }
                    else{
                        ans+=s2[j-1];
                        j--;
                    }
                }
            }
            while(j>0){
                ans+=s2[j-1];
                j--;
            }
    
            while(i>0){
                ans+=s1[i-1];
                i--;
            }
            reverse(ans.begin(),ans.end());
            return ans;
        }
    };