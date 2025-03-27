// 2033. Minimum Operations to Make a Uni-Value Grid 

class Solution {
    public:
        int minOperations(vector<vector<int>>& grid, int x) {
            int n=grid.size();
            int m=grid[0].size();
            // int a=INT_MAX;
            vector<int> nums;
            for(auto &i:grid){
                for(auto &j:i) {
                    // a=min(a,j);
                    nums.push_back(j);
                }
            }
            sort(nums.begin(),nums.end());
            int ans=0;
            int mid=(m*n)/2;
            for(int i=0;i<m*n;i++){
                if(abs((nums[i]-nums[mid]))%x!=0) return -1;
                ans+=abs(nums[i]-nums[mid])/x;
            }
            return ans;
        }
    };