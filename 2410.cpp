// 2410. Maximum Matching of Players With Trainers

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        int k=0;
        int count=0;
        for (int i=0;i<n;i++){
            int in=0;
            for (int j=k;j<m;j++){
                if (g[i]<=s[j]){
                    count++;
                    k=j+1;
                    in=1;
                    break;
                }
            }
            if(!in) break;
        }
        return count;
    }
};