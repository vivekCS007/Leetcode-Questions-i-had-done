// 378. Kth Smallest Element in a Sorted Matrix
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        priority_queue<int> p;
        for (auto i:matrix){
            for (auto j:i) p.push(j);
        }
        k=n*n-k+1;
        while(k!=1){
            // cout<<p.top();
            p.pop();
            k--;
        }
        return p.top();
    }
};