// 992. Subarrays with K Different Integers

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        vector<int> a(nums.size()+1,0);
        int ans=0,l=0,r=0,c=0;
        while(r<nums.size()){
            if (++a[nums[r++]]==1){
                // r++;
                // a[nums[r]]++;
                k--;
            }
            if (k<0){
                a[nums[l++]]--;
                // l++;
                k++;
                c=0;
            }
            if (k==0){
                while(a[nums[l]]>1){
                    a[nums[l]]--;
                    l++;
                    c++;
                }
                ans+=(c+1);
            }
            

        }
        return ans;
    }
};