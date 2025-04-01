// 2915. Longest Subsequence with Target Sum

class Solution {
    public:
        int lengthOfLongestSubsequence(vector<int>& nums, int target) {
            int n=nums.size();
            vector<vector<int>> t(n+1,vector<int>(target+1,-1));
            for(int i=0;i<n+1;i++){
                t[i][0]=0;
            }
            for(int i=1;i<n+1;i++){
                for(int j=1;j<target+1;j++){
                    if(nums[i-1]<=j && t[i-1][j-nums[i-1]]!=-1) t[i][j]=max(t[i-1][j],1+t[i-1][j-nums[i-1]]);
                    else t[i][j]=t[i-1][j];
                }
            }
            return t[n][target];
        }
    };