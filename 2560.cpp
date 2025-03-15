// 2560. House Robber IV

class Solution {
    public:
        int minCapability(vector<int>& nums, int k) {
            int l=0;
            int h=*max_element(nums.begin(),nums.end());
            int m=l+(h-l)/2;
            int ans=0;
            while(l<=h){
                int x=0;
                m=(l+h)/2;
                for(int i=0;i<nums.size();i++){
                    if(nums[i]<=m){
                        x++;
                        i++;
                    }
                }
                if(x>=k){
                    ans=m;
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
    
            return ans;
        }
    };