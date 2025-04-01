// 132. Palindrome Partitioning II

class Solution {
    public:
    bool ispal(string& s,int i,int j){
            // if(pal[i][j]!=-1) return pal[i][j];
            while(i<j){
                if(s[i]!=s[j]) return false;
                i++;
                j--;
            }
            return true;
        }
        int solve(string &s,int i,int j,vector<vector<int>>& t){
            if(t[i][j]!=-1) return t[i][j];
            if(i>=j || ispal(s,i,j)) return t[i][j]=0;
            int ans=INT_MAX;
            string temp="";
            for(int k=i;k<j;k++){
                if(ispal(s,i,k)){
                    int a=1+solve(s,k+1,j,t);
                    ans=min(ans,a);
                }
            }
            return t[i][j]=ans;
        }
        int minCut(string s) {
            int n=s.size();
            vector<vector<int>> t(n, vector<int> (n, -1));
            return solve(s,0,s.size()-1,t);
        }
    };