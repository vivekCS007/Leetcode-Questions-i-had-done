// 3208. Alternating Groups II

class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            int ans=0;
            for(int i=0;i<k-1;i++) colors.push_back(colors[i]);
            int l=0,r=0;
            int n=colors.size();
            while(r<n){
                if(r>0 && colors[r-1]==colors[r]) l=r;
                if(r-l+1>=k) ans++;
                r++;
            }
            return ans;
        }
    };