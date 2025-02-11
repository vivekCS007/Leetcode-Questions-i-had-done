// 2104. Sum of Subarray Ranges

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for (int i=0;i<n;i++){
            int ma=nums[i];
            int mi=nums[i];
            for (int j=i+1;j<n;j++){
                ma=max(ma,nums[j]);
                mi=min(mi,nums[j]);
                ans+=ma-mi;
            }
        }
        return ans;
    }
};