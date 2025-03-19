// 3191. Minimum Operations to Make Binary Array Elements Equal to One I

class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int n=nums.size();
            int ans=0;
            for(int i=0;i<=n-3;i++){
                if(nums[i]==0){
                    ans++;
                    for(int j=i;j<i+3;j++){
                        if(nums[j]==0) nums[j]=1;
                        else nums[j]=0;
                    }
                }
            }
            for(int i=n-2;i<n;i++){
                if(nums[i]==0) return -1;
            }
            return ans;
        }
    };