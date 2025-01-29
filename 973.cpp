// 973. K Closest Points to Origin
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;
        int n=points.size();
        for (auto i:points){
            int d=i[0]*i[0]+i[1]*i[1];
            pq.push({d,{i[0],i[1]}});
            if(pq.size()>k) pq.pop();
        }
        vector<vector<int>> ans;
        for (int i=0;i<k;i++){
            ans.push_back({{pq.top().second.first,pq.top().second.second}});
            pq.pop();
        }
        return ans;

    }
};