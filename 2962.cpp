// Count Subarrays where Max Element Appears at least k times

class Solution {
    public:
        long long countSubarrays(vector<int>& nums, int k) {
            long long ans=0;
            long long a=*max_element(nums.begin(),nums.end());
            int c=0;
            int i=0,n=nums.size();
            for(int j=0;j<n;j++){
                if(nums[j]==a) c++;
                while(c>=k){
                    ans+=n-j;
                    if(nums[i]==a) c--;
                    i++;
                }
            }
            return ans;
        }
    };