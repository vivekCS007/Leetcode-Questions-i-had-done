// 1780. Check if Number is a Sum of Powers of Three 

class Solution {
    public:
        bool checkPowersOfThree(int n) {
            // priotity_queue<int> pq;
            // if(n%3==2) return false;
            vector<long long> a;
            int x=n;
            // return true;
            for(int i=0;pow(3,i)<=n;i++) a.push_back(pow(3,i));
            while (!a.empty()){
                if(a[a.size()-1]<=x){
                    x-=a[a.size()-1];
                    if(x==0) return true;
                }
                a.pop_back();
            }
            return false;
    
        }
    };