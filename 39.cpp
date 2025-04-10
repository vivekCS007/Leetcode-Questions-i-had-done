// 39. Combination Sum

class Solution {
    public:
        void solve(vector<int>& nums,int k,int i,vector<vector<int>>& ans,int total,vector<int> x){
            if(total==k){
                ans.push_back(x);
                return;
            }
            if(i==nums.size() || total>k) return;
            solve(nums,k,i+1,ans,total,x);
            x.push_back(nums[i]);
            solve(nums,k,i,ans,total+nums[i],x);
        }
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> ans;
            vector<int> x;
            solve(candidates,target,0,ans,0,x);
            return ans;
        }
    };