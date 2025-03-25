// 518. Coin Change II

class Solution {
    public:
        int change(int amount, vector<int>& coins) {
            long long n=coins.size();
            vector<vector<long long>> t(n+1,vector<long long>(amount+1,0));
            for(long long i=0;i<=n;i++) t[i][0]=1;
            for(long long i=1;i<=n;i++){
                for(long long j=1;j<=amount;j++){
                    if(coins[i-1]<=j){
                        t[i][j]=(t[i][j-coins[i-1]]+t[i-1][j])%INT_MAX;
                    }
                    else t[i][j]=t[i-1][j];
                }
            }
            return t[n][amount];
        }
    };