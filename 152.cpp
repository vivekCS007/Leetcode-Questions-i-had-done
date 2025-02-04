// 152. Maximum Product Subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=INT_MIN;
        int nz=0;
        int c=1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=0) nz++;
            // if (nums[i]==0){
                
            // }
            if (nums[i]==0 || nums[i]==1) {
                prod=max(prod,nums[i]);
                continue;
            }
            c=nums[i];
            prod=max(prod,c);
            for (int j=i+1;j<nums.size();j++){
                if (nums[j]==0) break;
                c*=nums[j];
                prod=max(prod,c);
            }
            prod=max(c,prod);
        }
        if (!nz) return 0;
        return prod;
    }
};