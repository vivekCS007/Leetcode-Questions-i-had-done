// 494. Target Sum

class Solution {
    public:
        int findTargetSumWays(vector<int>& arr, int d) {
            int sum=accumulate(arr.begin(),arr.end(),0);
            sum+=abs(d);
            if(sum%2!=0) return 0;
            sum/=2;
            int n=arr.size();
            int t[n+1][sum+1];
            for(int i=0;i<n+1;i++){
                for(int j=0;j<sum+1;j++){
                    if(j==0) t[i][j]=1;
                    else t[i][j]=0;
                }
            }
            
            for(int i=1;i<n+1;i++){
                for(int j=0;j<sum+1;j++){
                    if(arr[i-1]<=j) t[i][j]=t[i-1][j]+t[i-1][j-arr[i-1]];
                    else t[i][j]=t[i-1][j];
                }
            }
            return t[n][sum];
        
        }
    };