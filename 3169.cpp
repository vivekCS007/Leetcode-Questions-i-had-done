// 3169. Count Days Without Meetings

class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            int ans=0;
            sort(meetings.begin(),meetings.end());
            int n=meetings.size();
            int end=0;
            for(int i=0;i<n;i++){
                int s=meetings[i][0];
                int e=meetings[i][1];
                if(s>end+1){
                    ans+=s-end-1;
                }
                end=max(end,e);
            }
            ans+=days-end;
            return ans;
        }
    };