// 3066. Minimum Operations to Exceed Threshold Value II

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long> >pq;
        for (int i:nums) pq.push(i);
        int ans=0;
        while(pq.top()<k && pq.size()>=2){
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            pq.push(min(a,b)*2+max(a,b));
            ans++;
        }
        return ans;
    }
};