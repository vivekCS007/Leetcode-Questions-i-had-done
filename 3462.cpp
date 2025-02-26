// 3462. Maximum Sum With at Most K elements

class Solution {
    public:
        long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
            long long ans=0;
            priority_queue<int> pq;
            int r=0;
            for (auto i:grid){
                sort(i.rbegin(),i.rend());
                int x=0;
                while(limits[r]--) {
                    pq.push(i[x]);
                    x++;
                        }
                r++;
            }
            int count=0;
            while (!pq.empty() && count<k) {
                ans+=pq.top();
                pq.pop();
                count++;
            }
            return ans;
        }
    };