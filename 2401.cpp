// 2401. Longest Nice Subarray

class Solution {
    public:
        int longestNiceSubarray(vector<int>& nums) {
            int ans=0;
            int l=0;
            int r=0;
            int n=nums.size();
            int x=0;
            // int a=0;
            while(r<n){
                while((x & nums[r])!=0){
                    x^=nums[l];
                    l++;
                    // ans=max(ans,r-l+1);
                }
                x|=nums[r];
                ans=max(ans,r-l+1);
                r++;
            }
            return ans;
        }
    };