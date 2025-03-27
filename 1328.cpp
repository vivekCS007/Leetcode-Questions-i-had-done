// 1328. Break a Palindrome

class Solution {
    public:
        string breakPalindrome(string p) {
            int n=p.length();
            if(n==1) return "";
            for(int i=0;i<n;i++) {
                if(p[i]!='a' && (n%2!=1 || i!=n/2)){
                    p[i]='a';
                    return p;
                }
            }
            p[n-1]='b';
            return p;
        }
    };