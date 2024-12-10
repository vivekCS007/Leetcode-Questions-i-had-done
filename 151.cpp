151. Reverse Words in a String

class Solution {
public:
    string reverseWords(string s) {
        // string a="";
        // int n=s.size();
        // int l=n-1,f=n-1;
        // int flag=1;
        // while(s[0]==' ') s.erase(0, 1);
        // while(s[s.size()-1]==' ') s.erase(s.size()-1,1);
        // while(!s.empty()){
        //     int p=s.find(' ');
        //     string g="";
        //     while(p){
        //         g=g+s[0];
        //         p--;
        //         s.erase(0,1);
        //     }
        //     a=g+a;
        //     if (!s.empty()) s.erase(0,1);
        //     a=' '+a;
        // }
        // return a;
        
        while (!s.empty() && s[0] == ' ') s.erase(0, 1);
        while (!s.empty() && s[s.size() - 1] == ' ') s.erase(s.size() - 1, 1);
        reverse(s.begin(), s.end());        
        int i = 0;
        while (i < s.size()) {
            int a = s.find(' ', i);
            while(s[a+1]==' ') s.erase(a+1,1);
            if (a == -1) {
                reverse(s.begin() + i, s.end());
                break;
            } 
            else {
                reverse(s.begin() + i, s.begin() + a);
                i = a + 1;
            }
        }
        return s;
    }
};
