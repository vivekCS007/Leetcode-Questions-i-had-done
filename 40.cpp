// 40. Combination Sum II

class Solution {
    public:
        void solve(vector<int>& nums,int k,int i,vector<vector<int>>& ans,int total,vector<int>& x){
            if(total==k){
                ans.push_back(x);
                return;
            }
            if(i==nums.size() || total>k) return;
    
            x.push_back(nums[i]);
            solve(nums,k,i+1,ans,total+nums[i],x);
            while (i+1<nums.size() && nums[i]==nums[i+1]) i++;
            x.pop_back();
            solve(nums,k,i+1,ans,total,x);
        }
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            sort(candidates.begin(),candidates.end());
            vector<vector<int>> ans;
            vector<int> x;
            solve(candidates,target,0,ans,0,x);
            return ans;
            
        }
    };