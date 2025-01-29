// 209. Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int n=nums.size();
        long long sum=0;
        int ans=INT_MAX;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                sum-=nums[l];
                ans=min(r-l+1,ans);
                l++;
            }
            r++;
        }

        if (ans==INT_MAX) return 0;
        return ans;
    }
};