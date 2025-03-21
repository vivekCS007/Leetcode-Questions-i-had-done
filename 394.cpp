// 394. Decode String

class Solution {
    public:
        string solve(string s,int& i){
            int n=0;
            string ans="";
            for(i;i<s.size();i++){
                if(s[i]=='['){
                    string a=solve(s,++i);
                    for(n;n>0;n--) ans+=a;
                }
                else if(isdigit(s[i])) n=n*10+s[i]-'0';
                else if(s[i]==']') return ans;
                else ans+=s[i];
            }
            return ans;
        }
        string decodeString(string s) {
            int i=0;
            return solve(s,i);
        }
    };