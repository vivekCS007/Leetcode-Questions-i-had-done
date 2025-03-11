// kth Smallest Number in Multiplication Table

class Solution {
    public:
        bool solve(int m,int n,long long mid,int k){
            long long a=0;
            for(int i=1;i<=m;i++){
                a+= min( mid/i , 1LL*n);
            }
            return a>=k;
        }
        int findKthNumber(int m, int n, int k) {
            long long h=m*1LL*n;
            long long l=1;
            while(l<h){
                long long mid=l+(h-l)/2;
                if(!solve(m,n,mid,k)) l=mid+1;
                else h=mid; 
            }
            return l;
        }
    };