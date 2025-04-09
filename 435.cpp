// 435. Non-overlapping Intervals

class Solution {
    public:

        int eraseOverlapIntervals(vector<vector<int>>& arr) {
            int c = 0;
            int n=arr.size();
            sort(arr.begin(), arr.end(),
                 [](auto a, auto b) { return a[1] < b[1]; });
            int l =INT_MIN;
            for (auto i : arr) {
                if (i[0] >= l) {
                    c++;
                    l = i[1];
                }
            }
            return n-c;
        }
    };