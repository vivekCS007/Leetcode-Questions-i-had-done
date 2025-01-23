// 3424. Minimum Cost to Make Arrays Identical
class Solution {
public:
    long long calculate(vector<int> arr,vector<int> brr){
        long long c=0;
        for (int i=0;i<arr.size();i++){
            c+=abs(arr[i]-brr[i]);
        }
        return c;
    }
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        int n=arr.size();
        int m=brr.size();
        if (arr==brr) return 0;
        long long ans=calculate(arr,brr);
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        ans = min(ans,(calculate(arr,brr)+k));
        return ans;
    }
};