// 201. Bitwise AND of Numbers Range

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=0;
        int c=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            c++;
        }
        ans=left<<c;
        return ans;
    }
};