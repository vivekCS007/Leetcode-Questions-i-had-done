// 2342. Max Sum of a Pair With Equal Sum of Digits

class Solution {
public:
    int sumOfDigits(long long n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;  
            n /= 10;        
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        // vector<int> a(n);
        unordered_map<int,priority_queue<int>> mp;
        for (int i=0;i<n;i++){
            int x=sumOfDigits(nums[i]);
            // a[i]=x;
            mp[x].push(nums[i]);
        }
        int ans=-1;
        for (auto& i:mp){
            if (i.second.size()>1){
                priority_queue<int> pq=i.second;
                int a=pq.top();
                pq.pop();
                int b=pq.top();
                ans=max(ans,a+b);
            }
        }
        return ans;


    }
};