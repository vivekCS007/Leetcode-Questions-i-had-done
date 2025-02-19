class Solution {
    public:
        int maxOperations(vector<int>& nums, int k) {
            sort(nums.begin(),nums.end());
            int l=0;
            int n=nums.size();
            int r=n-1;
            int ans=0;
            while(l<r){
                if (nums[l]+nums[r]<k){
                    l++;
                }
                else if(nums[l]+nums[r]>k) r--;
                else{
                    l++;
                    r--;
                    ans++;
                }
            }
            return ans;
        }
    };