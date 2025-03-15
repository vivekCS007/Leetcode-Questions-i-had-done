// 1760. Minimum Limit of Balls in a Bag

class Solution {
    public:
        int minimumSize(vector<int>& nums, int maxOperations) {
            int n=nums.size();
            int l=1;
            int h=*max_element(nums.begin(),nums.end());
            int m=l+(h-l)/2;
            int ans=0;
            while(l<=h){
                m=l+(h-l)/2;
                long long x=0;
                for(auto i:nums){
                    x+=ceil(i*1.0/m)-1;
                    // if()
                }
                if(x<=maxOperations){
                    ans=m;
                    h=m-1;
                }
                else l=m+1;
            }
            return ans;
        }
    };