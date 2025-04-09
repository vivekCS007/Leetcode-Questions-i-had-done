// 452. Minimum Number of Arrows to Burst Balloons

class Solution {
    public:
        int findMinArrowShots(vector<vector<int>>& arr) {
            int c = 1;
            if(arr.size()==1) return 1;
            sort(arr.begin(), arr.end(),
                 [](auto a, auto b) { return a[1] < b[1]; });
            int l = arr[0][1];
            int x=0;
            for (auto i : arr) {
                if(x==0){
                        x++;
                        continue;
                }
                if (i[0] > l) {
                    
                    c++;
                    l = i[1];
                }
            }
            return c;
        }
    };