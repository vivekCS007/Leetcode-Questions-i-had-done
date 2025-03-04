class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int p) {
            vector<int> ans;
            for(auto i:nums) if(i<p) ans.push_back(i);
            for(auto i:nums) if(i==p) ans.push_back(i);
            for(auto i:nums) if(i>p) ans.push_back(i);
            return ans;
        }
    };