// 887. Super Egg Drop

class Solution {
    public:
    
        int superEggDrop(int n, int k) {
            vector<vector<int>> t(k+1,vector<int>(n+1,0));
            int c=0;
            if(n==1) return k;
            while(t[c][n]<k){
                c++;
                for(int i=1;i<=n;i++){
                    t[c][i]=1+t[c-1][i-1]+t[c-1][i];
                }
            }
            return c;
        }
    };