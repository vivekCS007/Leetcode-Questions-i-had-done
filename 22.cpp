// 22. Generate Parentheses

class Solution {
    public:
        void solve(int n,vector<string>& ans,string x,int i=0,int ac=0,int bc=0){
            if(i==n){
                ans.push_back(x);
                return;
            }
            if(ac>bc){
                // x+=')';
                solve(n,ans,x+')',i+1,ac,bc+1);
            }
    
            if(ac<n/2){
                // x+='(';
                solve(n,ans,x+'(',i+1,ac+1,bc);
            }
    
        }
        vector<string> generateParenthesis(int n) {
            n*=2;
            vector<string> ans;
            string x="";
            solve(n,ans,x);
            return ans;
        }
    };