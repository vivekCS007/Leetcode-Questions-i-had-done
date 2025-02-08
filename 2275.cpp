// 2275. Largest Combination With Bitwise AND Greater Than Zero

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int l=*max_element(candidates.begin(),candidates.end());
        int ans=0;
        int n=candidates.size();
        while(l>0){
            int c=0;
            for (int i=0;i<n;i++){
                if (candidates[i]%2==1) c++;
                candidates[i]/=2;
            }
            l/=2;
            ans=max(c,ans);
        }
        return ans;
    }
};