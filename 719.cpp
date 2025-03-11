// 719. Find K-th Smallest Pair Distance

class Solution {
    public:
        bool valid(vector<int>& nums,int m,int k){
            int ans=0;
            int i=0,j=1;
            while(j<nums.size()){
                if(nums[j]-nums[i]<=m){
                    ans+=j-i;
                    j++;
                }
                else i++;
            }
            return ans>=k;
        }
        int smallestDistancePair(vector<int>& nums, int k) {
            int n=nums.size();
            sort(nums.begin(),nums.end());
            int l=0,h=nums[n-1]-nums[0];
            int mid=l+(h-l)/2;
            int ans=mid;
            while(l<=h){
                mid=l+(h-l)/2;
                if(valid(nums,mid,k)){
                    ans=mid;
                    h=mid-1;
                }
                else l=mid+1;
                // mid=l+(h-l)/2;
            }
            return ans;
        }
    };