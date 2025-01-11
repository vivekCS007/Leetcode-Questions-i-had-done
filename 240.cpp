// 240. Search a 2D Matrix II
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int r=0,c=col-1;
        while(r<row && c>=0){
            int a=matrix[r][c];
            if(a==target) return true;
            if(a<target) r++;
            else c--;
        }

        return false; 
    }
};
