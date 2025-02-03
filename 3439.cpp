// Reschedule Meetings for maximum Free time I
class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int> gap;
        int ans=0;
        int n=endTime.size();
        // int ans=0;
        gap.push_back(startTime[0]);
        for(int i =0;i<n-1;i++) gap.push_back(startTime[i+1]-endTime[i]);
        gap.push_back(eventTime-endTime[n-1]);
        // k=min(n,k);
        // for (int i=0;i<k+1;i++){
        //     ans+=gap[i];
        // }
        // int c=ans;
        // for(int i=1;i<n-k+1;i++){
        //     c-=gap[i-1];
        //     c+=gap[i+k-1];
        //     ans=max(ans,c);
        // }
        k=k+1;
        int i=0,j=k;
        long long c=accumulate(gap.begin(),gap.begin()+k,0);
        long long ma=c;
        while(j<gap.size()) {
            c=c-gap[i]+gap[j];
            ma=max(ma,c) ;
            i++;
            j++;
        }
        return ma;

        return ans;
        
    }
};