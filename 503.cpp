// 503. Next Greater Element II

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for (int i=0;i<n;i++){
            int ch=1;
            for (int j=0;j<n-1;j++){
                if (nums[(i+j+1)%n]>nums[i]) {
                    ans.push_back(nums[(i+j+1)%n]);
                    ch=0;
                    break;
                }
            }
            if (ch) ans.push_back(-1);
        }
        return ans;
    }
};