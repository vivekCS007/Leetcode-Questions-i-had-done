// Divide Two Integers


class Solution {
public:
    long long divide(long long dividend, long long divisor) {
        int flag=0;
        if (divisor==1) return dividend;
        if (dividend>=2147483647 && divisor==-1) return -2147483647;
        // if (divisor==-1){
        //     dividend*=-1;
        //     return dividend;
        // }
        if (dividend<0){
                flag=1;
                dividend*=-1;
        }
        if (divisor<0){
            if (flag==0) flag=1;
            else flag=0;
            // cout<<flag;
            divisor*=-1;
        }
        long long q=0;
        while(dividend>=divisor){
            q++;
            dividend-=divisor;
        }
        if (q>2147483647) q= 2147483647;
        if (flag) return -1*q;
        return q;
    }
};
