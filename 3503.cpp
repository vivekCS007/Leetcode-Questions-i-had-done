// 3503. Longest Palindrome After Substring Concatenation I

class Solution {
    public:
        int t[31][31];
        int lcs(string& s1, string& s2) {
            int n=s1.length();
            int m=s2.length();
            for(int i=0;i<=n;i++){
                for(int j=0;j<=m;j++){
                    t[i][j]=0;
                }
            }
            int ans=0;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    if(s1[i-1]==s2[j-1])t[i][j]=1+t[i-1][j-1];
                    else t[i][j]=0;
                    ans=max(ans,t[i][j]);
                }
            }
            return ans;
        }
    string fin(const string& s, int a, int b) {
        while (a>=0 && b<s.length() && s[a]==s[b]){
            a--;
            b++;
        }
        return s.substr(a+1,b-a-1);
    }
    
    int longest(string s) {
        if (s.empty()) return 0;
        string c="";
        for (int a=0;a<s.length();a++){
            string b=fin(s,a,a);
            if (b.length()>c.length()) c=b;
            string d=fin(s,a,a+1);
            if (d.length()>c.length()) c=d;
        }
    
        return c.length();
    }
    bool isPalindrome(const string& s) {
        int left = 0, right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
        int longestPalindrome(string s, string t) {
            int n=s.size(),m=t.size();
            // reverse(t.begin(),t.end());
            // int ans=2*lcs(s,t);
            // ans=max(ans,longest(s));
            // ans=max(ans,longest(t));
            // // if(ans<longest())
            // return ans;
            int ans = 0;
        
        for (int i=0;i<s.length();i++){
            for (int j=i;j<s.length();j++){
                string subs1=s.substr(i,j-i+1);
                for (int k=0;k<t.length();k++){
                    for (int l=k;l<t.length();l++){
                        string subs2=t.substr(k,l-k+1);
                        string c=subs1+subs2;
                        if(isPalindrome(c)){
                            ans=max(ans,(int)c.length());
                        }
                    }
                }
            }
        }
        ans=max(ans,longest(s));
        ans=max(ans,longest(t));
        
        return ans;
            
            
        }
    };