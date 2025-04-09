// 3159. Find Occurrences of an Element in an Array

class Solution {
    public:
        vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
            vector<int> h;
            int n=nums.size();
            for(int i=0;i<n;i++) if(nums[i]==x) h.push_back(i);
            vector<int> ans;
            for(auto i:queries){
                if(i>h.size()) ans.push_back(-1);
                else ans.push_back(h[i-1]);
            }
            return ans;
        }
    };