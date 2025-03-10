// 1476. Subrectangle Queries
class SubrectangleQueries {
public:
    vector<vector<int>> rec;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rec=rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for (int i=row1;i<=row2;i++){
            for (int j=col1;j<=col2;j++){
                rec[i][j]=newValue;
            }

        }
        // for (int i=0;i<rec.size();i++){
        //     for (int j=0;j<rec[0].size();j++){
        //         cout<<rec[i][j];
        //     }
        //     cout<<endl;
        // }
    }
    
    int getValue(int row, int col) {
        return rec[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */