// 260 Single Number III

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for (int i:nums) {
            mp[i]++;
            // if (mp[i]==2);
        }
        
        for (auto i:mp){
            if (i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};