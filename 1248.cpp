// 1248. Count Number of Nice Subarrays


class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int a = 0;
        int b = 0;
        int n = nums.size();
        int x = 0;
        vector<int> odd;
        odd.push_back(-1);
        for (int i=0;i<n;i++){
            if (nums[i]%2!=0){
                odd.push_back(i);
            }
        }
        odd.push_back(n);
        int m=odd.size();
        int ans=0;
        for (int i=1;i<m-k;i++){
            // if (odd[i]==0) ans++;
            ans+=(odd[i+k]-odd[i+k-1])*(odd[i]-odd[i-1]);
        }

        return ans;
    }
};