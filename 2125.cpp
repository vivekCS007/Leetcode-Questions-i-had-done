// 2125. Number of Laser Beams in a Bank
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> a;
        int n=bank.size();
        if (n<=1) return 0;
        for(int i=0;i<n;i++){
            int count=0;
            for (char j:bank[i]){
                if (j=='1') count++;
            }
            if (count!=0) a.push_back(count);
        }
        if (a.size()<=1) return 0;
        int ans=0;
        for (int i=0;i<a.size()-1;i++){
            ans+=a[i]*a[i+1];
        }
        return ans;
    }
};
