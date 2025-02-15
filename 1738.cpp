// 1738. Find Kth Largest XOR Coordinate Value

class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        int n=matrix.size();
        int m=matrix[0].size();
        for (int i=0;i<n;i++){
            int x=matrix[i][0];
            // pq.push(x);
            for (int j=1;j<m;j++){
                x=x^matrix[i][j];
                matrix[i][j]=x;
                // pq.push(x);
            }
        }
        for (int i=0;i<m;i++){
            int x=matrix[0][i];
            pq.push(x);
            for (int j=1;j<n;j++){
                x^=matrix[j][i];
                matrix[j][i]=x;
                pq.push(x);
            }

        }
        while(pq.size()>m*n-k+1) pq.pop();
        return pq.top();
    }
};