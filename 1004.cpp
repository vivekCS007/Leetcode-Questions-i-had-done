// 1004. Max Consecutive Ones III

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> odd;
        odd.push_back(-1);
        for (int i=0;i<n;i++)  if (nums[i]==0) odd.push_back(i);
        odd.push_back(n);
        // for(int i:odd) cout<<i;
        int m=odd.size();
        // cout<<m;
        if (m-2<=k || m==0) return n;
        int ma=0;
        int x=0;
        for (int i=1;i<m-k;i++){
            x=odd[i+k]-1-odd[i-1];
            ma=max(x,ma);
        }
        return ma;
    }
};