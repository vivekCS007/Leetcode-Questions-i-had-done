// 87. Scramble String

class Solution {
    public:
    unordered_map<string, bool> mp;
    
    bool solve(string a,string b){
        if(a==b) return true;
        if(a.length()<=1) return false;
        if (mp.count(a+"#"+b)) {
            return mp[a+"#"+b];
        }
        int n=a.length();
        bool f=false;
        for(int i=1;i<=n-1;i++){
            if(((solve(a.substr(0,i),b.substr(n-i,i))==true && solve(a.substr(i,n-i),b.substr(0,n-i))==true)||
            (solve(a.substr(0,i),b.substr(0,i))==true && solve(a.substr(i,n-i),b.substr(i,n-i))==true) )) 
            return true;
        }
        return mp[a+"#"+b]=f;
    }
        bool isScramble(string a, string b) {
            if(a.length()!=b.length()) return false;
            if(a==b) return 1;
            if(a.empty() && b.empty()) return false;
            return solve(a,b);
        }
    };