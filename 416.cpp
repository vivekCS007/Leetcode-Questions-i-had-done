// 416. Partition Equal Subset Sum

class Solution {
    public:
        int t[202][20002];
        bool solve(vector<int>& nums,int w,int n){
            if(w==0) return true;
            if(w<0) return false;
            if(n==0) return false;
            if(t[n][w]!=-1) return t[n][w];
            if(nums[n-1]<=w) return t[n][w]=solve(nums,w-nums[n-1],n-1)||solve(nums,w,n-1);
            return t[n][w]=solve(nums,w,n-1);
        }
        bool canPartition(vector<int>& nums) {
            int a=accumulate(nums.begin(),nums.end(),0);
            int b=*max_element(nums.begin(),nums.end());
            if(a%2!=0) return false;
            if(a/2==b) return true;
            if(a/2<b) return false;
            memset(t,-1,sizeof(t));
            return solve(nums,a/2,nums.size());
        }
    };