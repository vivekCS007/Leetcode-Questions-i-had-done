// 2064. Minimized Maximum of Products Distributed to Any Store

class Solution {
    public:
        int minimizedMaximum(int n, vector<int>& quantities) {
            // int n=quantities.size();
            int l=1;
            int h=*max_element(quantities.begin(),quantities.end());
            int m=l+(h-l)/2;
            int ans=h;
            while(l<=h){
                m=l+(h-l)/2;
                int x=0;
                for(auto i:quantities){
                    x+=(i+m-1)/m;
                } 
                if(x<=n){
                    ans=m;
                    h=m-1;
                }
                else {
                    l=m+1;
                }
            }
            return ans;
        }
    };