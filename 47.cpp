// 47. Permutations II

class Solution {
    public:
        vector<vector<int>> permuteUnique(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            set<vector<int>> s;
            do{
                s.insert(nums);
            }while(next_permutation(nums.begin(),nums.end()));
            vector<vector<int>> ans;
            for(auto i:s){
                ans.push_back(i);
            }
            return ans;
        }
    };