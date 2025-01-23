// 318. Maximum Product of Word Lengths
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int> m(n,0);
        for (int i=0;i<n;i++){
            for (char c:words[i]){
                int x=c-'a';
                m[i]=m[i]|(1<<x);
            }
        }
        int ans=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if ((m[i]&m[j])==0){
                    // cout<<words[i]<<" "<<words[j]<<endl;
                    int x=words[i].length();
                    int y=words[j].length();
                    // cout<<x<<" "<<y<<endl;
                    ans = max(ans,(x*y));
                }
            }
        }
        return ans;
    }
};