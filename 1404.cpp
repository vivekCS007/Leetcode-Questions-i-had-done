// 1404. Number of Steps to Reduce a Number in Binary Representation to One

class Solution {
public:
    int numSteps(string s) {
        if (s=="1" || s=="0") return 0;
        int ans=0;
        while(s!="1"){
            if (s.back()=='0'){
                s.pop_back();
            }
            else{
                int c=1;
                for (int i=s.length()-1;i>=0 && c;i--){
                    if (s[i]=='1') s[i]='0';
                    else{
                        s[i]='1';
                        c=0;
                    }
                }
                if (c) s='1'+s;
            }
            ans++;
        }
        return ans;
    }
} ;