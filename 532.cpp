class Solution {
    public:
        int findPairs(vector<int>& nums, int k) {
            int ans=0;
            unordered_map<int,int> mp;
            int n=nums.size();
            for(int i=0;i<n;i++){
                for (int j=i+1;j<n;j++) if (abs(nums[i]-nums[j])==k) {
                    if(nums[i]>=nums[j]) mp[nums[i]]++;
                    else mp[nums[j]]++;
                }
            }
            return mp.size();
        }
    };