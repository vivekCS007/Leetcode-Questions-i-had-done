// 2140. Solving Questions With Brainpower

class Solution {
    public:
        vector<long long> t;
        long long solve(int i,vector<vector<int>>& questions){
            if(i>=questions.size()) {
                return 0;
            }
            long long ans=0;
            if (t[i]!=-1) return t[i];
            t[i]=ans=questions[i][0]+solve(i+questions[i][1]+1,questions);
            return t[i]=ans=max(ans,solve(i+1,questions));
            // return ans;
            
        }
        long long mostPoints(vector<vector<int>>& questions) {
            int n=questions.size()+1;
            t.resize(n+1,-1);
            long long ans=0;
            return solve(0,questions);
        }
    };