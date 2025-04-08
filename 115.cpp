// 115. Distinct Subsequences

class Solution {
    public:
    int x[1002][1002];
        int solve(string& s,string& t,int n,int m){
            if(m==0)return 1;
            if(n==0) return 0; 
            if(x[n][m]!=-1) return x[n][m]; 
            if(s[n-1]==t[m-1]){
               x[n][m]=solve(s,t,n-1,m-1)+solve(s, t, n-1, m);
            }
            else x[n][m]=solve(s,t,n-1,m);
            return x[n][m];
        }
        int numDistinct(string s, string t) {
            memset(x,-1,sizeof(x));
            int n=s.length();
            int m=t.length();
            solve(s,t,n,m);
            return x[n][m];
        }
    };