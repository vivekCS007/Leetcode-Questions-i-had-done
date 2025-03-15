// 2226. Maximum Candies Allocated to K Children

class Solution {
    public:
        bool valid(long long m,vector<int>& candies,long long k){
            long long ans=0;
            for(auto i:candies) ans+=i/m;
            return k<=ans;
        }
        int maximumCandies(vector<int>& candies, long long k) {
            // return 1;
            long long h=*max_element(candies.begin(),candies.end());
            long long l=1;
            long long ans=0;
            while(l<=h){
                long long m=l+(h-l)/2;
                if(valid(m,candies,k)){
                    ans=m;
                    l=m+1;
    
                }
                else{
                    h=m-1;
                }
            }
            return (int)ans;
    
        }
    };