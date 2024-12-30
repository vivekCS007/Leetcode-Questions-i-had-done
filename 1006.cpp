// 1006. Clumsy Factorial

class Solution {
public:
    int clumsy(int n) {
        int clum=0;
        if (n==1) return 1;
        else if (n==2) return 2;
        else if (n==3) return 6;
        if (n>=4){
            clum+=n*(n-1)/(n-2)+(n-3);
            n-=4;
        }
        while(n>=4){
            clum=clum-n*(n-1)/(n-2)+(n-3);
            n-=4;
        }
        if (n==3) clum = clum-6;
        else if (n==2) clum=clum-2;
        else if (n==1) clum=clum-1;
        return clum;
    }
};