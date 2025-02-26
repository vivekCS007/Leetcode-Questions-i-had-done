// 1524. Number of Sub-arrays With Odd Sum

class Solution {
    public:
        int numOfSubarrays(vector<int>& arr) {
            int o=0;
            int n=arr.size();
            int e=0;
            for(auto i:arr){
                if(i%2==0) e++;
                else o++;
            }
            if (o==0) return 0;
            // if (o==1) return n*(n+1)/2+1;
            int ans=0;
            o=0;
            e=1;
            int s=0;
            int m=1e9+7;
            for(auto i:arr){
                s+=i;
                if(s%2==0){
                    e++;
                    ans+=o;
                }
                else{
                    o++;
                    ans+=e;
                }
                ans%=m;
            }
            return ans;
    
        }
    };