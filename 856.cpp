// 856. Score of Parentheses

class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0;
        int x=0;
        int n=s.length();
        for (int i=0;i<n;i++){
            char c=s[i];
            if (c=='(') x++;
            else {
                // x--;
                ans+=pow(2,x-1);
                while(i<n && s[i]==')'){ 
                    i++;
                    x--;
                }
                i--;
            }
        }
        return ans;
    }
};