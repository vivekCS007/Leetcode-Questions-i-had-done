// 1726. Tuple with Same Product

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        if (n<4) return 0;
        // if (n==4) return 8;
        // return 1;
        // sort(nums.begin(),nums.end());
        unordered_map<long long,int> mp;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                mp[nums[i]*nums[j]]++;
            }
        }
        int ans=0;
        for (auto i:mp){
            int x=i.second;
            if (i.second>=2){
                ans+=x*(x-1)/2;
            }
        }
        return 8*ans;
        return 1;
    }
};