// 2270. Number of Ways to Split Array
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long long> num(n,0);
        for (int i=0;i<n;i++){
            num[i]=nums[i];
            if (i>=1) num[i]+=num[i-1];
        }
        int op=0;
        for (int i=0;i<n-1;i++){
            if(num[i]>=num[n-1]-num[i]) op++;
        }
        return op;
    }
};