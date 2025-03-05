// 2579. Count Total Number of Colored Cells

class Solution {
    public:
        // long long coloredCells(int n) {
        //     long long ans=0;
        //     long long x=1;
        //     for(int i=0;i<n;i++){
        //         ans+=2*x;
        //         if(i==n-1) ans-=x;
        //         x+=2;
        //     }
        //     return ans;
        // }


        return (1LL*n*n*2-1LL*2*n+1);
    };