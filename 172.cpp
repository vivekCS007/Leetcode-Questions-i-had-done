// Factorial Trailing Zeroes

class Solution {
    public:
        int trailingZeroes(int n) {
            if(n<5) return 0;
            int ans=0;
            while(n/5>0){
                ans+=n/5;
                n/=5;
            } 
            // if (n!=1) ans+=1;
            return ans;
        }
    };