// 3211. Generate Binary Strings Without Adjacent Zeros

class Solution {
    public:
        void solve(int n,vector<string>& ans,int i=0,string x=""){
            if(i==n){
                ans.push_back(x);
                return;
            }
            if(i==0 || x[i-1]!='0') solve(n,ans,i+1,x+'0');
            solve(n,ans,i+1,x+'1');
        }
        vector<string> validStrings(int n) {
            vector<string> ans;
            solve(n,ans);
            return ans;
        }
    };