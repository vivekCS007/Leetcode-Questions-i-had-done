// Closest Prime Numbers in Range

class Solution {
    public:
        vector<bool> sieve(int n){
            vector<bool> primes(n+1,true);
            primes[0]=primes[1]=false;
            for (int i=2;i*i<=n;i++) if(primes[i]) for(int j=i*i;j<=n;j+=i) primes[j] = false;
            return primes;
        }
        vector<int> closestPrimes(int left, int right) {
            vector<bool> a=sieve(right);
            vector<int> b;
            int ans=INT_MAX;
            vector<int> aa={-1,-1};
            
            for(int i=left;i<right+1;i++){
                if(a[i]){
                    b.push_back(i);
                    if(b.size()>1){
                        if(b[b.size()-1]-b[b.size()-2]<ans){
                            ans=b[b.size()-1]-b[b.size()-2];
                            aa={b[b.size()-2],b[b.size()-1]};
                        }
                    }
                }
            }    
            return aa;
        }
    };