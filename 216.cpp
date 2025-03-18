// 216. Combination Sum III

class Solution {
    public:
        void solve(int n,int k,vector<vector<int>>& ans,vector<int> x,vector<int> a,int i=0){
            if(x.size()==k){
                if(accumulate(x.begin(),x.end(),0)!=n) return;
                ans.push_back(x);
                return;
            }
            if(accumulate(x.begin(),x.end(),0)>n) return;
            if(i==9) return;
            solve(n,k,ans,x,a,i+1);
            x.push_back(a[i]);
            solve(n,k,ans,x,a,i+1);       
        }
        vector<vector<int>> combinationSum3(int k, int n) {
            vector<vector<int>> ans;
            vector<int> a={1,2,3,4,5,6,7,8,9};
            vector<int> x;
            solve(n,k,ans,x,a);
            return ans;
        }
    };