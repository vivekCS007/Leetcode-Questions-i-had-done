// 238. Product of Array Except Self


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> lp(n, 1);  
        vector<int> rp(n, 1);  
        vector<int> result(n); 
        // lp[0] = 1;
        for (int i = 1; i < n; i++) {
            lp[i] = lp[i - 1] * nums[i - 1];
        }

        // rp[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            rp[i] = rp[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++) {
            result[i] = lp[i] * rp[i];
        }

        return result;
    }
};
