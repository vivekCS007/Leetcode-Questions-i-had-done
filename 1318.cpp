// 1318. Minimum Flips to Make a OR b Equal to c    

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(c>0){
            int x=a%2;
            int y=b%2;
            int z=c%2;
            if (x==1 && z!=1) ans++;
            if (y==1 && z!=1) ans++;
            if ((x==0 && y==0) && z!=0) ans++;
            a/=2;
            b/=2;
            c/=2;
        }
        while(a){
            if (a%2==1) ans++;
            a=a/2;
        }

        while(b){
            if (b%2==1) ans++;
            b=b/2;
        }
        return ans;
    }
};