// 347. Top K Frequent Elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>> pq;
        for (auto i:mp){
            pq.push({i.second,i.first});
        }
        vector<int> v;
        for (int i=0;i<k;i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};