// 1482. Minimum Number of Days to Make m Bouquets

class Solution {
public:
    int count(vector<int> arr,int b,int k){
        int a=0;
        int z=k;
        int x=0;
        for (int i:arr){
            if (i<=b) x++;
            else x=0;
            if (x==k) {
                a++;
                x=0;
            }

        }
        return a;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if (k*1LL*m>n) return -1;
        int ma=*(max_element(bloomDay.begin(),bloomDay.end()));
        if (n==m*1LL*k) return ma;
        int r=ma;
        int l=1;
        while(l<r){
            int mid=l+(r-l)/2;
            int c=count(bloomDay,mid,k);
            if (c>=m) r=mid;
            else l=mid+1;
        }
        return l;
    }
};