// 3446. Sort Matrix By Diagonals

class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& mat) {
        unordered_map<int,priority_queue<int,vector<int>,greater<int>>> mp;
        unordered_map<int,priority_queue<int>> mp2;
        int n=mat.size();
        int m=mat[0].size();
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i<j) mp[i-j].push(mat[i][j]);
                else mp2[i-j].push(mat[i][j]);
            }
        }

        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (i<1j) {mat[i][j]=mp[i-j].top();
                mp[i-j].pop();}
                else {
                    mat[i][j]=mp2[i-j].top();
                    mp2[i-j].pop();
                }
            }
        }
        return mat;
    }
};