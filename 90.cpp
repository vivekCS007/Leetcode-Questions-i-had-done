// 90. Subsets II

class Solution {
    public:
        void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>>& ans){
            if (index>=nums.size()){
                ans.push_back(output);
                return;
            }
            solve(nums,output,index+1,ans);
            output.push_back(nums[index]);
            solve(nums,output,index+1,ans);
        }
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> output;
            int index=0;
            solve(nums,output,index,ans);
            for(auto& i:ans){
                sort(i.begin(),i.end());
            }
            set<vector<int>> a;
            for(auto i:ans){
                a.insert(i);
            }
            vector<vector<int>> an;
            for (auto i:a){
                an.emplace_back(i);
            }
            return an;
        }
    };