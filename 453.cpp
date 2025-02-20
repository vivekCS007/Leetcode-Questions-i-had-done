// 453. Minimum Moves to Equal Array Elements

class Solution {
    public:
        int minMoves(vector<int>& nums) {
            int a=*min_element(nums.begin(),nums.end());
            int n=nums.size();
            int ans=accumulate(nums.begin(),nums.end(),-1*n*a);
            return ans;
        }
    };