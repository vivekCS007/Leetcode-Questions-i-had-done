// 738. Monotone Increasing Digits

class Solution {
    public:
        vector<int> a(int n){
            vector<int> ans;
            while(n>0){
                ans.insert(ans.begin(),n%10);
                n/=10;
            }
            return ans;
        }
        int b(vector<int> an){
            int ans=0;
            for (int i=0;i<an.size();i++){
                ans=ans*10+an[i];
            }
            return ans;
        }
        int monotoneIncreasingDigits(int n) {
            if (n<10) return n;
            if (n==10) return 9;
            if (n<20) return n;
            vector<int> an=a(n);
            for (int i=1;i<an.size();i++){
                if (an[i-1]>an[i]) {
                    an[i-1]--;
                    int k=i-1;
                    // while(k>=1 && an[k]<an[k-1]){
                    //     an[k]=9;
                    //     an[k-1]--;
                    // }
                    // while()
                    for(int j=i;j<an.size();j++){
                        an[j]=9;
                    }
                    while (i > 1 && an[i-1] < an[i-2]) {
                        an[i-2]--;
                        an[i-1] = 9;
                        i--;
                    }
                    break;
                }
            }
            int ans=b(an);
            return ans;
        }
    };