// 31. Next Permutation

class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            next_permutation(nums.begin(),nums.end());
        }
        void nextpermutation(vector<int>& nums) {
            int i=nums.size()-2;
            while(i>=0 && nums[i+1]<=nums[i]) i--;
            if(i>=0){
                int j=nums.size()-1;
                while(nums[j]<=nums[i]) j--;
                int t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
            }
            reverse(nums.begin()+i+1,nums.end());
        }
};