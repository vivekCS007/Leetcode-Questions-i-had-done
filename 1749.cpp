// 1749. Maximum Absolute Sum of Any Subarray

class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int a=0,b=0,ans=0;
            for (auto i:nums){
                if(a+i<0) a+=i;
                else a=0;
                ans=max(ans,abs(a));
                if(b+i>0) b+=i;
                else b=0;
                ans=max(ans,b);
            }
            return ans;
        }
    };