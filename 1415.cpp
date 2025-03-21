// 1415. The k-th Lexicographical String of All Happy Strings of Length n

class Solution {
    public:
        void solve(vector<string>& ans,int n,string x="",int i=0){
            if(i==n){
                ans.push_back(x);
                return;
            }
            
            if (x.empty() || x.back()!='a') solve(ans,n,x+'a',i+1);
            if (x.empty() || x.back()!='b') solve(ans,n,x+'b',i+1);
            if (x.empty() || x.back()!='c') solve(ans,n,x+'c',i+1);
        }
        string getHappyString(int n, int k) {
            vector<string> ans;
            solve(ans,n);
            sort(ans.begin(),ans.end());
            if(k>ans.size()) return "";
            return ans[k-1];
        }
    };