// 18. 4Sum

class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& arr,int k) {
            // sort(arr.begin(), arr.end());  
            vector<vector<int>> result;
            int n=arr.size();
    
            for(int i=0;i<n-2;i++){
                if (i>0 && arr[i]==arr[i-1]) continue;
                int left=i+1;
                int right=n-1;
                while (left<right) {
                    long long sum=1LL*arr[i]+arr[left]+arr[right];
                    if (sum==k){
                        result.push_back({arr[i], arr[left], arr[right]});
                        while (left<right && arr[left]==arr[left + 1]) left++;
                        while (left<right && arr[right]==arr[right-1]) right--;
                        left++;
                        right--;
                    } 
                    else if(sum<k)left++;  
                    else right--;  
                }
            }
            return result;
        }
        vector<vector<int>> fourSum(vector<int>& nums, int k) {
            sort(nums.begin(),nums.end());
            int n=nums.size();
            set<vector<int>> r;
            vector<vector<int>> ans;
            for(int i=0;i<n-4+1;i++){
                vector<int> x(nums.begin()+i+1,nums.end());
                vector<vector<int>> b=threeSum(x,k-nums[i]);
                if(b.size()!=0){
                    for(auto a:b){
                        a.insert(a.begin(),nums[i]);
    
                    ans.push_back(a);
                    }
                }
            }
            for(auto i:ans){
                r.insert(i);
            }
            ans.clear();
            for(auto i:r) ans.push_back(i);
            return ans;
        }
    };