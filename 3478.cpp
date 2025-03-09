// 3478. Choose K elements With Maximum Sum

class Solution {
    public:
        vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2, int k) {
            priority_queue<long long, vector<long long >, greater<long long>> pq;
            int n=nums1.size();
            vector<long long> ans(n,0);
            vector<pair<long long,long long>> a;
            for(int i=0;i<n;i++) a.push_back({nums1[i],i});
            sort(a.begin(),a.end());
            long long s=0;
            long long x=0;
            for(long long i=0;i<n;i++){
                long long c=a[i].first;
                long long ci=a[i].second;
                while(x<n && nums1[a[x].second]<c) {
                    pq.push(nums2[a[x].second]);
                    s+=nums2[a[x].second];
                    x++;
                }
                while(pq.size()>k){
                    s-=pq.top();
                    pq.pop();
                }
                ans[ci]=s;
            }
            return ans;
        }
    };