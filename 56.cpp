//56. Merge Intervals 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if (n <= 1) return intervals;
        sort(intervals.begin(), intervals.end());
        for (int i=0;i<n-1;){
            
            if ((intervals[i][1] >= intervals[i + 1][0])) {
                intervals[i][1] = max(intervals[i][1], intervals[i + 1][1]);
                intervals[i][0] = min(intervals[i][0], intervals[i + 1][0]);
                intervals.erase(intervals.begin() + i + 1); 
                n--;  
            } else {
                i++;
            }
        }
        return intervals;
    }
};
