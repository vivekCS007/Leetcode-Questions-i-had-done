// 128. Longest Consecutive Sequence

class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
    
            sort(nums.begin(),nums.end());
            int a=1;
            int ans=1;
            if (nums.size()==0) return 0;
            for(int i=1;i<nums.size();i++){
                if (nums[i]==nums[i-1]+1 || nums[i]==nums[i-1]){
                    if (nums[i]==nums[i-1]) a--;
                    a++;
                    ans=max(ans,a);
                }
                else a=1;
            }
            return ans;
        }
    };