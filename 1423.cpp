// 1423. Maximum Points You Can Obtain from Cards

class Solution {
    public:
        int maxScore(vector<int>& cardPoints, int k) {
            int s=0,n=cardPoints.size();
            if(n==k) return accumulate(cardPoints.begin(),cardPoints.end(),0);
            for(int i=0;i<k;i++) s+=cardPoints[i];
            int ans=s;
            s=0;
            for(int i=n-k;i<n;i++) s+=cardPoints[i];
            ans=max(s,ans);
            for(int i=n-k;i<n;i++){
                s=s-cardPoints[i]+cardPoints[(i+k)%n];
                ans=max(s,ans);
            }
            return ans;
        }
    };