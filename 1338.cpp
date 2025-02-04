// 1338. Reduce Array Size to The Half

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for (int i:arr ) mp[i]++;
        priority_queue<int> pq;
        for (auto i:mp) pq.push(i.second);
        int n=arr.size()/2;
        int k=0;
        int ans=0;
        while(k<n){
            k+=pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }

};