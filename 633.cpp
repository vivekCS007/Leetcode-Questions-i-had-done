// Sum of Square Numbers
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        while(i*i<=c){
            int j=c-i*i;
            int d=sqrt(j);
            if(d*d==j) return true;
            i++;
        }
        return false;
    }
};
