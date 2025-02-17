// 2865. Beautiful Towers I

class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        int n=heights.size();
        long long ans=0;
        for (int i=0;i<n;i++){
            vector<int> x=heights;
            for (int j=i-1;j>=0;j--){
                if (x[j]>x[j+1]) x[j]=x[j+1];
                
            }
            for (int j=i;j<n-1;j++){
                if (x[j+1]>x[j]) x[j+1]=x[j];
            }
            long long c=accumulate(x.begin(),x.end(),0LL);
            ans=max(ans,c);
        }
        return ans;
    }
};