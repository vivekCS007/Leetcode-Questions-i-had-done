// 2594. Minimum Time to Repair Cars

class Solution {
    public:
        long long repairCars(vector<int>& ranks, int cars) {
            long long l=1;
            // sort(ranks.begin(),ranks.end());
            long long h=LLONG_MAX;
            long long m=l+(h-l)/2;
            long long ans=0;
            while(l<h){
                m=l+(h-l)/2;
                long long x=0;
                for(int i=0;i<ranks.size();i++){
                    x+=sqrt(m/(ranks[i]));
                    if(x>cars) break;
                }            
                if(x>=cars){
                    // ans=m;
                    h=m;
                }
                else{
                    ans=m;
                    l=m+1;
                }
            }
            return ans+1;
        }
    };