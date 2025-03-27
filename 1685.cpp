// 1685. Sum of Absolute Differences in a Sorted Array

class Solution {
    public:
        vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
            int n=nums.size();
            vector<int> ans;
            // int sum=accumulate(nums.begin(),nums.end(),0);
            vector<int> pref(1,0);
            for(int i=0;i<n;i++) pref.push_back(pref[i]+nums[i]);
            for(int i=0;i<n;i++){
                int x=abs((i+1)*nums[i]-pref[i]);
                int y=pref[n]-pref[i+1]-(n-i)*nums[i];
                ans.push_back(x+y);
            }
            return ans;
        }
    };