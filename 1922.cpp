// 1922. Count Good Numbers

// #define MOD (1e9+7)
class Solution {
    public:
        long long power(long long a,long long b) {
            long long result=1;
            long long MOD=1e9+7;
            while(b>0){
                if(b%2 == 1) result=(result*a)%MOD;
                a=(a*a)%MOD;
                b/=2;
            }
            return result;
        }
        int countGoodNumbers(long long n) {
            long long MOD=1e9+7;
            long long x=n/2;
            long long a=power(4,x);
            long long b=power(5,n-x); 
            return (a*b)%MOD;
        }
    };