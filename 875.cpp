// 875. Koko Eating Bananas
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m=piles[0];
        int n=piles.size();
        if (n==1){
            return (piles[0] + h - 1) / h; 
        }
        for (int i=0;i<n;i++) m=max(piles[i],m);
        if (h==n) return m;
        int l=1;
        int r=m;
        int mid;
        while(l<r){
            mid=l+(r-l)/2;
            int sum=0;
            for (int x:piles){
                sum+=ceil((double)x/mid);
            }
            // cout<<sum<<endl;
            // if (sum==h) return mid;
            if (sum<=h) r=mid;
            else l=mid+1;
        }
        return l;
    }
};