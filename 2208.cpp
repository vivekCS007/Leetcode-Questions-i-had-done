// 2208. Minimum Operations to Halve Array Size

class Solution {
public:
    int halveArray(vector<int>& nums) {
        int n=nums.size();
        priority_queue<double> pq;
        for (auto i:nums) pq.push(i);
        double removed=0;
        double t=accumulate(nums.begin(),nums.end(),0LL);
        int ans=0;
        while(removed<t/2){
            double a=pq.top();
            pq.pop();
            removed+=a/2;
            pq.push(a/2);
            ans++;

        }
        return ans;
    }
};