// Find number of copy Arrays

class Solution {
    public:
        int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
            int n=original.size();
            int mi=INT_MIN,ma=INT_MAX;
            for (int i=0;i<n;i++){
                // if(original[i]>bounds[i][1] || original[i]<bounds[i][0]) return false;
                bounds[i][0]-=original[i];
                bounds[i][1]-=original[i];
                mi=max(bounds[i][0],mi);
                ma=min(bounds[i][1],ma);
            }
            if(ma-mi+1<0) return 0;
            return ma-mi+1;
            
        }
    };