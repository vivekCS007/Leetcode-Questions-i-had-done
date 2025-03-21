// 1823. Find the Winner of the Circular Game

class Solution {
    public:
        void solve(vector<int>& v,int k,int i,int& ans){
            if(v.size()==1){
                ans=v[0];
                return;
            }
            i=(i+k)%v.size();
            v.erase(v.begin()+i);
            solve(v,k,i,ans);
        }
        int findTheWinner(int n, int k) {
            vector<int> v;
            for(int i=1;i<=n;i++) v.push_back(i);
            k--;
            int i=0;
            int ans=0;
            solve(v,k,i,ans);
            return ans;
            
        }
    };