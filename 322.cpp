// 322. Coin Change

class Solution {
    public:
        int coinChange(vector<int>& coins, int amount) {
            int n=coins.size();
            vector<vector<long long>> t(n+1,vector<long long>(amount+1,INT_MAX));
            for (long long i = 0; i <= n; i++) {
                t[i][0] = 0;
            }
            for(long long i=1;i<=amount;i++) {
                if(i%coins[0]==0) t[1][i] = i/coins[0];
            }
    
            for(long long i=2;i<=n;i++){
                for(long long j=1;j<=amount;j++){
                    long long a=t[i-1][j];
                    if(coins[i-1]<=j) a=min(a,1+t[i][j-coins[i-1]]);
                    t[i][j]=a;
                }
            }
            if(t[n][amount]==INT_MAX) return -1;
            return t[n][amount];
        }
    };