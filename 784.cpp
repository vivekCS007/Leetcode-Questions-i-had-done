// 784. Letter Case Permutation

class Solution {
    public:
    
    void solve(string s,int i,vector<string>& ans){
        if(i==s.size()) {
            ans.push_back(s);
            return;
        }
        solve(s,i+1,ans);
        if(islower(s[i])){
            s[i]=toupper(s[i]);
            solve(s,i+1,ans);
        }
        else if(isupper(s[i])){
            s[i]=tolower(s[i]);
            solve(s,i+1,ans);
        }
    }
        vector<string> letterCasePermutation(string s) {
            vector<string> ans;
            solve(s,0,ans);
            return ans;
        }
    };