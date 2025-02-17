// 3457. Eat Pizzas

class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n=pizzas.size();
        priority_queue<int> pq;
        for (auto i:pizzas) pq.push(i);
        long long ans=0;
        if (n==4) return pq.top();
        int x,y;
        x=n/8;
        y=n/8;
        if (n%8!=0) x++;
        for (int i=0;i<x;i++){
            ans+=pq.top();
            pq.pop();
        }
        for (int i=0;i<y;i++){
            pq.pop();
            ans+=pq.top();
            pq.pop();
        }
        return ans;
        
    }
};